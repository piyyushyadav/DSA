class Solution {
public:
int n;
vector<vector<int>> ans;
unordered_map<int,int> mp;

void solve(vector<int> &nums,vector<int> &temp){
    if(temp.size() == n){
        ans.push_back(temp);
        return ;
    }

    for(auto & [num,count] : mp){

        if(count !=0){
        

        
            temp.push_back(num);
            mp[num]--;
            solve(nums,temp);
            temp.pop_back();
            mp[num]++;
        }
        }
    

}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
      
         n = nums.size();

         for(int i =0;i<n;i++){
            mp[nums[i]]++;
         }
        vector<int> temp;
        solve(nums,temp);

        return ans;

    }
};