class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a = "";
        string b = "";
        int n1 = word1.size();
        int n2 = word2.size();
        
        for(int i =0;i<n1;i++){
            a += word1[i];
        }
        for(int i =0;i<n2;i++){
            b += word2[i];
        }
        if(a.size()!= b.size()){
            return false;
        }

        for(int i =0;i<a.size();i++){
            if(a[i] != b[i]){
                return false;
                break;
            }
        }
        return true;


       
    }
};