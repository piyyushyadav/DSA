class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int last_index =-1;

       for(int i =n-1;i>=0;i--){
        if(num[i]%2!=0){
            last_index = i;
            break;

        }
       }
       string ans = "";
       if(last_index == -1){
        return ans;
       }

       else{
      
        for(int i = 0;i<=last_index;i++){
            ans.push_back(num[i]);
        
       }

       return ans;
       }
    }
};