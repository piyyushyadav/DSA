class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        int n = nums.size();
        int cursum =0;
        int result = 0;
        mp.insert({0,1});


        for(int i =0;i<n;i++){
            cursum +=nums[i];

            if(mp.find(cursum-k) != mp.end()){
                result += mp[cursum-k];
            }

            mp[cursum]++;


        }
        
        return  result;

        
    }
};