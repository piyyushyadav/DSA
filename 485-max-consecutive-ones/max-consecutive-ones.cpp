class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();

        int currcount =0;
        int maxcount = 0;

        for(int i =0;i<n;i++){
            if(nums[i] == 1){
                currcount +=1;
                maxcount = max(maxcount,currcount);
            }
            else{
                currcount =0;
            }
        }

        return maxcount;
    }
};