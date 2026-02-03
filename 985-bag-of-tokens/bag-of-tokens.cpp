class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        sort(tokens.begin(),tokens.end());

        int maxscore =0;
        int score =0 ;
        int i =0;
        int j = n-1;
        while(i<=j){
            //pahle ham score ko badha sakte hai agar hamara power >=tokens[i] ke
            if(power>=tokens[i]){
                power -= tokens[i];
                score+=1;
                i++;
                maxscore = max(score,maxscore);
            }
            // agar yesa nhi hai toh ham power ko le sakte hai from j if score>=1
            else if(score>=1){
                power += tokens[j];
                score -= 1;
                j--;
            }
            else{
                return maxscore;
            }
        }
        return maxscore;
        
    }
};