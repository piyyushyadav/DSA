class Solution {
public:

bool all(vector<int> & time,long long totalTrip, long long mid){
    long long count = 0;
    for(int & x: time){
        count += mid/x;
        
    }
    return count>= totalTrip;

}
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l =1;
       long long r = 1LL * (*min_element(time.begin(), time.end())) * totalTrips;
        


        while(l<r){
            long long mid = l + (r-l)/2;

            if(all(time,totalTrips,mid)){
                r = mid;
            }
            else{
                l = mid+1;
            }
        }
        return l;
    }
};