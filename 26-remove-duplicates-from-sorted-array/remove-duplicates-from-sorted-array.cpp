class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

       int i = 0;
       while(i<nums.size()){
        int j = i+1;

        while(j<nums.size() && nums[i] == nums[j]){
            nums.erase(nums.begin()+j);
        }
        i++;
       }

       int n1 =  nums.size();

       return n1;
    }
};