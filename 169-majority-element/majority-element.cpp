class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count =0;

        int maj = nums[0];
        for(int i =0;i<n;i++){
            if(nums[i] == maj){
                count++;
            }
            else if(count ==0){
                maj = nums[i];

            }

            else{

                count--;
            }
        }

        return maj;
    }
};