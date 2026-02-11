class Solution {
public:
    string makeGood(string s) {
        int  n = s.size();
        stack<char> st;
        
         for(int i =0;i<n;i++){
            char ch = s[i];
            if(!st.empty() && abs(ch - st.top()) == 32){
                st.pop();
                
            }
            else{
            st.push(ch);
            }

         }

         string ans;

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
            
        }
         reverse(ans.begin(),ans.end());
         return ans;

    }

};