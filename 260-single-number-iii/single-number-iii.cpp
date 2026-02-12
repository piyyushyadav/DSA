class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int> mp;

        vector<int> ans;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(auto & i:mp){
            if(i.second ==1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};