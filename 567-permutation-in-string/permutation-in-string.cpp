class Solution {
public:
   bool allzero(vector<int> nums){
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(nums[i] != 0){
            return false;
        }
    }
    return true;
   }
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();

        vector<int> counter(26,0);
        for(int i=0;i<n;i++){
            counter[s1[i] - 'a']++;
        }


        int k = s2.size();
        int  i =0;
        int j = 0 ;

        while(j<k){
            counter[s2[j]-'a']--;
            if(j-i+1==n){

            if(allzero(counter)){
                return  true;
            }
            

            counter[s2[i]-'a']++;
            i++;
            }
            j++;



        }
        return false;
    }
};