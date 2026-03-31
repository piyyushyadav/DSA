class Solution {
public:
int atmost(vector<int> & nums,int k){
    int n  = nums.size();
        int count  =0;
        int i = 0;
        int j = 0;
        unordered_map<int,int> mp;

        while(j<n){
            int a = nums[j];
            mp[nums[j]]++;
            while(mp.size() >k){
                mp[nums[i]]--;
                if(mp[nums[i]] ==0){
                mp.erase(nums[i]);
                }
                i++;
            }


            count+= j-i+1;
            j++;

}
     return count;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
      return atmost(nums,k)- atmost(nums,k-1);

        
    }
};