class Solution {
public:

 bool isvovel(char ch ){
  if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
    return true;
  }

  return false;
 }
    int maxVowels(string s, int k) {
        int n = s.size();
        int i =0;
        int j =0;
        int count =0;
        int max1 =0;

        while(j<n){
          if(isvovel(s[j])){
            count++;
          }
          if(j-i+1 ==k){
            max1 = max(max1,count);
            if(isvovel(s[i])){
                count--;
            }
            i++;
          }
          j++;
            
        }
        return max1;
        
    }
};