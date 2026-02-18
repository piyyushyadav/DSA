class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();

        int i = 0;
        int j = 0;
        int count =0;
        int min1 = INT_MAX;
        int sum =0;
        while(j<n){
          
            sum += nums[j];

            while(sum >=target){
                count = j-i+1;
                min1 = min(min1,count);
                sum -= nums[i];
                i++;

                 }
                
                 j++;
                 
        }
        if(min1 == INT_MAX){
            return 0;

        }
        else{
            return min1;
        }

    }
};