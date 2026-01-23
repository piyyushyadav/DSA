class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> map1;
        int n = nums.size();

        for(int i=0;i<n;i++){
            map1[nums[i]] +=1;
        }
        int max = 0;
        int ans =-1;
        for(auto &x : map1){
        
            if(x.second>max){
                max = x.second;
                ans = x.first;

            }
        }
            return ans;
        
    }
};