class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n1 = ransomNote.size();
        int n2 = magazine.size();


         unordered_map<char,int> mp;
         

         for(char ch :  ransomNote){
            mp[ch]++;
         }


         for(int i = 0;i<n2;i++){
            if(mp.find(magazine[i]) != mp.end()){
                mp[magazine[i]] --;
            }
         }
         bool ans = true;

         for(auto & i : mp){
            if(i.second >0){
                ans = false;
                return ans;
            }
         }

         return ans;
         
    }
};