class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        // Step 1: Calculate prefix products directly into the 'ans' array
        for (int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }

        // Step 2: Calculate suffix products on the fly and multiply
        int suffix_prod = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] = ans[i] * suffix_prod;
            suffix_prod *= nums[i]; 
        }

        return ans;
    }
};