class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //yeha greater element nikalna hai toh monotoi=nic decrising stack 
        // right side mai toh 0 se n tak


        stack<int> st;
        
        int n = temperatures.size();
        vector<int> ans(n,0);
        for(int i =0;i<n;i++){
            int count =0;
        
          while(!st.empty() && temperatures[st.top()]<temperatures[i]){
           // yeha pe prev mai index store kiya hai usko i se minus krke days count kr liya hai
           
            int prev = st.top();

                st.pop();

                ans[prev] = i - prev; 

            }
            
            st.push(i);
        }
        return ans;
    }
};