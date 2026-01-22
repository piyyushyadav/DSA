class NumArray {
public:
vector<int> ans;
    NumArray(vector<int>& nums) {
        ans.push_back(0);

        for(int x : nums){
            ans.push_back(ans.back()+x);
        }
    }
    
    int sumRange(int left, int right) {
        
        return ans[right+1] - ans[left];
    }
};

