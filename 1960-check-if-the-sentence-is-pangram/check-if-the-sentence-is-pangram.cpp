class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();

        vector<bool> seen(26,false);
        for(char ch : sentence){
            seen[ch-'a'] = true;
        }
         for(char ch : seen){
            if(!ch){
                return false;
            }
         }
         return true;

    }
};