class Solution {
public:
    bool rotateString(string s, string goal) {
        int n1 = s.size();
        int n2 = goal.size();

    if(n1 != n2){
        return false;

    }

    int i = 0;
    int j = n1-1;
    for(int i =0;i<n2;i++){
     
        if(s == goal){
            return true;
        }
        char first = s[0];
        s = s.substr(1) + first;
        j--;
    

    }
    return false;
    }
};