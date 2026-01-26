class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        
        int n = temperatures.size();
        vector<int> ans(n,0);

        for(int i = 0 ;i<n;i++){
            int count = 0;
            while(!st.empty() && temperatures[st.top()]<temperatures[i]){
               int prev = st.top();

                st.pop();

                ans[prev] = i - prev;
                
            }
            
            st.push(i);

        }

        return ans;
        
    }
};