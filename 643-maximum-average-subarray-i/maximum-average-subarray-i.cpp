class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n  = nums.size();
        int i = 0;
        int j = 0;
     double curr = 0;
     double  mavg = -1e9;
        double sum = 0;



        while(j<n){
             sum += nums[j];
            

            if(j-i+1 ==k){
                curr = sum/k;
                mavg = max(mavg,curr);
               sum -= nums[i];
               i++;
            }
            j++;

        }
        return mavg;
    }
};