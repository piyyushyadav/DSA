class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int a = nums[i];
            int left = target -a;

            if(mp.find(left) != mp.end()){

                return {mp[left],i};


            }
            mp[nums[i]] = i;
        }
        return {};
    }
};