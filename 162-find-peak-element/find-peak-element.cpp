class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        long long i =0;
        while(i<n-1 &&nums[i]<nums[i+1]){
            i++;
        }
        return i;
    }
};