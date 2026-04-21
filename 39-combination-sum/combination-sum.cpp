class Solution {
public:

   void solve(int index,vector<int> temp,vector<vector<int>> & ans, vector<int>&candidates,int target){
    if(target ==0){
        ans.push_back(temp);
    }
    for(int j = index ; j<candidates.size();j++){

        if(candidates[j]>target){
            continue;
        }
        

        temp.push_back(candidates[j]);
        solve(j,temp,ans,candidates,target-candidates[j]);
        temp.pop_back();

    }

   }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;

        vector<vector<int>> ans;

        int i =0;

        solve(i,temp,ans,candidates,target);

        return ans;
    }
};