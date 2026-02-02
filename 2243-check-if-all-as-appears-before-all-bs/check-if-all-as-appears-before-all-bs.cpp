class Solution {
public:
    bool checkString(string s) {

    string ans = "";

    for(char ch: s){
        ans.push_back(ch);
    }
    sort(ans.begin(),ans.end());
    int n = s.size();
    for(int i =0;i<n;i++){
        if(ans[i] != s[i]){
            return false;
        }
    }
    return true;

    }
};