class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        vector<int> pre(n+1,0);
        vector<int> suff(n+1,0);

        pre[0] = 0;
        suff[n] = 0;


        for(int  i = 0;i<n;i++){
            pre[i+1] = pre[i] +nums[i];
        }

        for(int i = n-1;i>=0;i--){
            suff[i] = suff[i+1] +nums[i];
        }

        for(int i = 0;i<n;i++){
            ans.push_back(abs(suff[i+1]-pre[i]));
        }

        return ans;

        
    }
};