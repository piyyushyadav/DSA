class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       int n1 = g.size();
       int n2 = s.size();

       int count =0;
       sort(g.begin(),g.end());
       sort(s.begin(),s.end());
       int i =0;
       int j = 0;
       while(i<n2 && j<n1){
        if(s[i] >= g[j]){
            count++;
            i++;
            j++;
        }
        else{
            i++;
        }
       }
       return count;
        
    }
};