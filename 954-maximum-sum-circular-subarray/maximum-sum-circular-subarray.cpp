class Solution {
public:
 int solvemax(vector<int> nums){
    int n  = nums.size();

    int currsum  = nums[0];
    int maxsum = nums[0];

    for(int  i = 1;i<n;i++){
        currsum = max(currsum+nums[i],nums[i]);
        maxsum = max(currsum,maxsum);
    }

    return maxsum;
 }
 int solvemin(vector<int> nums){
    int n  = nums.size();

    int currsum  = nums[0];
    int minsum = nums[0];

    for(int  i = 1;i<n;i++){
        currsum = min(currsum+nums[i],nums[i]);
        minsum = min(currsum,minsum);
    }

    return minsum;
 }
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();

        int totalsum = accumulate(nums.begin(),nums.end(),0);
        
    
    int max1 = solvemax(nums);
    int min1 = solvemin(nums);
    int cursum = totalsum  - min1;


    if(max1>0){
        return max(max1,cursum);
    }
    else{
        return max1;
    }
    }
};