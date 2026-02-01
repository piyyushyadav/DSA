class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int currm  = nums[0];
        int count =0;
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]  == currm){
                count++;
            }
            else if(count ==0){
                currm = nums[i];
            }

            else{
                count--;
            }
        }
        return currm;
    }
};