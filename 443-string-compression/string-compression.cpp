class Solution {
public:
    int compress(vector<char>& chars) {

        int n = chars.size();

        int i =0 ;
        int index =0;

        while(i<n){
            int count =0;
            char curr = chars[i];
            while(i<n && curr == chars[i]){
                count++;
                i++;
            }
            chars[index] = curr;
            index++;

            if(count>1){
                string count1 = to_string(count);
                for(char &ch : count1){
                    chars[index] = ch;
                    index++;
                }
            }
        }
        return index;
        
    }
};