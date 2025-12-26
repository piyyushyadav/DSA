class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        map<int,int> fre;

        for(int x : nums){
            fre[x]+=1;

        }
        for(int  i = 1 ;i<=n;i++){
            if(fre[i] == 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};