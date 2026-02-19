class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int i  =0;
        int j   = 0;
        int result =0;
        int count =0;
        unordered_map<int,int> mp;
        mp.insert({0,1});


        for(int i =0;i<n;i++){
            count+=nums[i];
             if(mp.find(count-goal) != mp.end()){
                result += mp[count-goal];
            }
            mp[count]++;
        }
        return result;
    }
};