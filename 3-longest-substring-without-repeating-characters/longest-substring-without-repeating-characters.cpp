class Solution {
public:
bool isthere(string a){
    int n = a.size();
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                return false;
            }
        }
    }
    return true;
}
    int lengthOfLongestSubstring(string s) {
        int n = s.size();



        int i =0;
        int j =0;
        
        string ans ="";
        int count =0;
        int max1 =0;

        while(j<n){
            ans.push_back(s[j]);
            count++;
           
            while(!isthere(ans)){
                
                ans.erase(0, 1);
                i++;
                count--;
               
                
            }
            max1 = max(max1, count);
            j++;
            
        }
        return max1;
    }
};