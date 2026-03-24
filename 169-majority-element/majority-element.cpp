class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        int currmax = nums[0];
        
        int count = 0;
        for(int  i = 0;i<n;i++){
            if(nums[i] == currmax){
                count++;
            }
           else if(count ==0){
                currmax = nums[i];
            }
            else{
                count--;
            }
        }
        return currmax;
    }
};