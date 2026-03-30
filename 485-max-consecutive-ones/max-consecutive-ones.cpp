class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n  = nums.size();

        int maxcount =0;
        int currcount = 0;
        for(int i =0;i<n;i++){
            if(nums[i] ==1){
                currcount +=1;
            }
            else{
                currcount =0;
            }

            maxcount  = max(maxcount,currcount);
        }

        return maxcount;
    }
};