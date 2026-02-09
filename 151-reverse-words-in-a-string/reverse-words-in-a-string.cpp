class Solution {
public:
    string reverseWords(string s) {
        stack<char> st;
        string ans;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                st.push(s[i]);
            } else if (!st.empty()) {
                while (!st.empty()) {
                    ans += st.top();
                    st.pop();
                }
                ans += ' ';
            }
        }

        // last word
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        // remove trailing space
        if (!ans.empty() && ans.back() == ' ')
            ans.pop_back();

        return ans;
    }
};
