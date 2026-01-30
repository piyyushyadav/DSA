class Solution {
public:
  bool allzero(vector<int>  nums){
    for(int x:nums){
        if(x!=0){
            return false;
        }
        
    
    }

    return true;
  }
    vector<int> findAnagrams(string s, string p) {
        vector<int> counter(26,0);
        int n = p.size();
        for(int  i = 0 ;i<n;i++){
            counter[p[i] - 'a']++;
        }

        vector<int> ans;
        int i = 0 ;
        int  j =0;
       
        int  k = s.size();

        while(j<k){
            counter[s[j]-'a']--;

            if(j-i+1 ==n){
                if(allzero(counter)){
                    ans.push_back(i);
                }
                counter[s[i] -'a']++;
                i++;


            }
            j++;


        }
        return ans;














         
    }
};