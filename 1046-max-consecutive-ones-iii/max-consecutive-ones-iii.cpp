class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();

        int zero = 0;
        int maxcount =0;

        int i =0;
        int j  =0;

        while(j<n){
            int a = nums[j];
            if(a == 0){
                zero +=1;
            }
            while(zero>k){
            
                if(nums[i] ==0){
                zero--;
                }
                i++;
            }

            maxcount = max(maxcount,j-i+1);
            j++;

        }
        return maxcount;
    }
};