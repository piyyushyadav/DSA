class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curr = nums[0];

        int count = 0;
        int n= nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]==curr){
                count++;
            }

            else if(count ==0){
                curr = nums[i];
            }

            else{
                count --;
            }
        }

        return curr;
    }
};