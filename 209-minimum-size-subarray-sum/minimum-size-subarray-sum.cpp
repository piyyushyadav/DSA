class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i =0;
        int j = 0;
        int n = nums.size();
        int ans =INT_MAX;
        int sum =0;
        
        

        while(j<n){
            int curr = 0;
        
            sum += nums[j];
        
          while(sum >= target){
                curr = j-i+1;
                ans  = min(curr,ans);
                sum-=nums[i];
                i++;
                 }
            j++;
        }

        if(ans == INT_MAX){
            return 0;
        }
        else{
            return ans;
        }
        
    }
};