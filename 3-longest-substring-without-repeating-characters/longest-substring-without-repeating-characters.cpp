class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxcount = 0;
        int  i = 0;
        int  j = 0;
        unordered_map<char,int> mp;
        while(j<n){
            char ch = s[j];
            mp[ch]++;

            while(mp[ch]>1){
            
                mp[s[i]]--;
                i++;
            }
           
            maxcount = max(maxcount,j-i+1);
            j++;
        }
        return maxcount;
    }
};