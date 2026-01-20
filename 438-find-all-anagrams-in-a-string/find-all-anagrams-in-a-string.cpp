class Solution {
public:

bool allzero(vector<int>&arr){
      int n = arr.size();
      
      for(int  i = 0 ; i<n;i++){
          if(arr[i]!=0){
              return false;
          }
      }
      return true;
  }

    vector<int> findAnagrams(string s, string p) {
         vector<int>counter(26,0);
         
         for(int i = 0 ; i<p.length() ; i ++){
            char ch = p[i];
            counter[ch - 'a']++;




         }

         int  i = 0 ;
          int j =  0;

          
          int n  = s.size();
          vector<int> ans;
          int k = p.size();
          while(j<n){
            counter[s[j] - 'a'] --;
            
            
            if(j-i+1==k){
            if(allzero(counter)){
                ans.push_back(i);
            }
            
           counter[s[i] - 'a']++;
            i++;
            }
            j++;
            
        

          }
          return ans;
    }
};