class Solution {
public:
int atmost(vector<int> & nums,int k){
     int n = nums.size();
        int i = 0;
        int j = 0;

        int count = 0;
        int oddcount = 0;
        while(j<n){
             int a = nums[j];
             if(a%2!=0){
                oddcount++;
             }

             while(oddcount >k){
                if(nums[i] %2 !=0){
                    oddcount--;
                }
                i++;
             }
             count += j-i+1;
             j++;
             
        }
        return count;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
       return atmost(nums,k)-atmost(nums,k-1);
    }
};