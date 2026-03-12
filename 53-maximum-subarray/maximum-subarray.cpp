class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = nums[0];
        int max1 = nums[0];
        int n = nums.size();

        for(int i = 1;i<n;i++){
            curr = max(curr+nums[i],nums[i]);
            max1 = max(curr,max1);
        }

        return max1;
    }
};