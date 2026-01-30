class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ans;

        int n  = nums.size();

        for(int i=0;i<n;i++){
            int left = target -nums[i];
            if(ans.find(left) !=ans.end()){
                return {ans[left],i};
            }
            ans[nums[i]] = i;
        }
        return {};
    }
};