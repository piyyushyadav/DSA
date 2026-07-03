class Solution {
public:
    bool isAnagram(string s, string t) {
      int n = s.size();
      int m  = t.size();
   unordered_map<char,int> mp1;

   for(char ch : s){
    mp1[ch]++;
   }

   for(char ch : t){
    mp1[ch] --;
   }

   for(auto & i : mp1){
    if(i.second !=0){
        return false;
    }
   }

   return true;
          
    }
};