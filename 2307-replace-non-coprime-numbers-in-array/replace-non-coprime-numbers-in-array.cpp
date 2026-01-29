class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        

        stack <long> st;

        for(long long n : nums){
            long curr = n ;
            while(!st.empty() && gcd(st.top(),curr)>1){
                curr = lcm(st.top(),curr);
                st.pop();
            }
            st.push(curr);
        }

        vector<int> ans;

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};