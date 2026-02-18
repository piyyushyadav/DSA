class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int i=0;
        int j =0 ;

        int result =0;
        vector<int> nums(3,0);
        while(j<n){

            char ch = s[j];
            nums[ch-'a']++;
            while(nums[0] >0 &&nums[1]>0 && nums[2]>0){
                result += (n-j);
                nums[s[i] - 'a']--;
                i++;
            }
            j++;

            
        }
        return result;
    }
};