class Solution {
public:

int minPairSum(vector<int> &nums){
    int n =  nums.size();
    int minele =  INT_MAX;
    int index = -1;
    for(int i = 0 ; i<n-1;i++){
        if(nums[i] + nums[i+1]< minele){
            index =  i ;
         minele = nums[i]+nums[i+1];
        }
    }
    return index;
}
    int minimumPairRemoval(vector<int>& nums) {
        int op =  0 ; 
         while(!is_sorted(begin(nums), end(nums))){
            int index = minPairSum(nums);
            nums [index] = nums[index] + nums[index+1];


            nums.erase(begin(nums) + index+1);
            op++;
         }
         return op;
    }
};