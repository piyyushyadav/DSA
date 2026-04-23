class Solution {
public:

bool isvalid(string curr){
    int count = 0;

    for(char ch : curr){
        if(ch == '('){
            count++;
        }
        else{
            count --;
            if(count <0){
                return false;
            }
        }
    }

    if(count !=0){
        return false;
    }

    return true;
}
 void solve(int n,string&curr,vector<string> &ans){
 
     if(curr.size() == 2*n){
        if(isvalid(curr)){
            ans.push_back(curr);
        }
        return ;
     }


     curr.push_back('(');
     solve(n,curr,ans);
     curr.pop_back();
     curr.push_back(')');
     solve(n,curr,ans);
     curr.pop_back();

 }
    vector<string> generateParenthesis(int n) {
        string curr  = "";
        vector<string> ans;
        solve(n,curr,ans);

        return ans;
    }
};