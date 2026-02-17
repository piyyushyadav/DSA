class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();

        int count1 = 0;
        unordered_map<int,int> mp;
        int result =0;


        mp[count1] = 1;
        for(int i =0;i<n;i++){
            if(nums[i]%2 !=0){
                count1++;
                }
                if(mp.count(count1-k)){
                    result+=mp[count1-k];
                }


                mp[count1] +=1;



        }
        return result;
        
    }
};