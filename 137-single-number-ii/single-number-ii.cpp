class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n  = nums.size();
        unordered_map<int,int> mp;
        for(int  i =0;i<n;i++){
            mp[nums[i]]++;
        }
        int ans =-1;
        for(auto &i : mp){
            if(i.second==1){
                ans = i.first;
                return ans;
            }
        }
        return ans;
    }
};