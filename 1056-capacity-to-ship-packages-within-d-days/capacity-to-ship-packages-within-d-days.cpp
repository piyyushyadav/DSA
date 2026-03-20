class Solution {
public:

 bool all(vector<int> & weights,int days,int mid){
    int daysUsed = 1;
        int currentLoad = 0;

        for (int w : weights) {
            if (currentLoad + w <= mid) {
                currentLoad += w;
            } else {
                daysUsed++;
                currentLoad = w;
            }
        }

        return daysUsed <= days;
    }

 
    int shipWithinDays(vector<int>& weights, int days) {
        long l = *max_element(weights.begin(),weights.end());
        long r = accumulate(weights.begin(),weights.end(),0);

        while(l<r){
            long long  mid = l + (r-l)/2; 
            if(all(weights,days,mid)){
                r = mid;
            }
            else{
                l = mid+1;
            }
        }
        return l;
    }
};