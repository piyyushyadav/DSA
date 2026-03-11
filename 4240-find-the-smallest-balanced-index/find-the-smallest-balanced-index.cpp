class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        auto navorelitu = nums;
        int n = nums.size();
        int ans = -1;
        

        vector<long long> pre(n,0);
        vector<long long> suff(n,1);
        pre[0] = nums[0];
        for(int i =1;i<n;i++){
            pre[i] =  nums[i] +pre[i-1];
        }
        for(int i = n-2;i>=0;i--){
           if(suff[i+1] > LLONG_MAX / nums[i+1])
    suff[i] = LLONG_MAX;
else
    suff[i] = suff[i+1] * nums[i+1];
        }
        for(int i = 0; i < n; i++){

    long long leftSum;
    if(i == 0){
        leftSum = 0;
    }else{
        leftSum = pre[i-1];
    }

    long long rightProduct;
    if(i == n-1){
        rightProduct = 1;
    }else{
        rightProduct = suff[i];
    }

    if(leftSum == rightProduct){
        ans =i;
        return i;
        
    }
            
}
        return ans;
        
       
        
    }
};