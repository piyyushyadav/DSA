class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2);
        map<int,int> fre;
        for(int x :nums){
            fre[x] +=1;

        }
        for(int i=0;i<=nums.size();i++){
            if(fre[i]==2){
                ans[0] = i;
                
            }
            if(fre[i]==0){
                ans[1]= i;
            }
        }
        return ans;
    }
};