class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0] ;
        int currsum  = nums[0] ;
        int n = nums.size();   
        if(n==1){
            return  nums[0];
        }
        for(int i =1;i<n;i++){
            currsum = max(currsum+nums[i],nums[i]);
            sum = max(currsum,sum);
        }

        return sum;
    }
};