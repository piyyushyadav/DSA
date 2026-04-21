class Solution {
public:

void solve(int index,vector<int>&temp,vector<vector<int>>&ans,int k ,int n){

    if(n ==0 && temp.size() ==k){
        ans.push_back(temp);
        return;
    }


    if(n<0 || temp.size() >k){
        return;
    }
    for(int i = index;i<=9;i++){

        temp.push_back(i);
        solve(i+1,temp,ans,k,n-i);
        temp.pop_back();
    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;

        vector<int> temp;
        int i = 1;

        solve(i,temp,ans,k,n);

        return ans;
    }
};