class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        int currm = nums[0];

        int counter = 0;

        for(int i =1;i<n;i++){
            if(nums[i] == currm){
                counter++;
            }
            else if(counter == 0){
                currm = nums[i];
            }

            else{
                counter --;
            }
        }
        return currm;
    }
};