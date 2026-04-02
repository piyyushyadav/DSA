class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
      vector<int> pre(n);

       pre[0] =  nums[0];
      for(int i =1;i<n;i++){
        pre[i] = pre[i-1]+nums[i];
      }

      int total = pre[n-1];

     
      int ans =-1;

      for(int i =0;i<n;i++){
        int left = (i == 0) ? 0 : pre[i-1];
         int right = total - pre[i];
         if(left == right){
            ans = i ;
            return ans;
         }
        
      }
      return ans;
      
    }
};