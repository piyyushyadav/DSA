class Solution {
public:
// iss vector mai sare result one by one temp se nikal ke push kar denge;
   vector<vector<int>> result;

   void solve(vector<int> &nums,int i,vector<int>temp){
    if(i == nums.size()){
        result.push_back(temp);
        return;
    }

    temp.push_back(nums[i]);
    solve(nums,i+1,temp);
    temp.pop_back();
    solve(nums,i+1,temp);

   }

    vector<vector<int>> subsets(vector<int>& nums) {
        int i = 0;
        vector<int> temp;
         solve(nums,i,temp);
         return result;
        
    }
};