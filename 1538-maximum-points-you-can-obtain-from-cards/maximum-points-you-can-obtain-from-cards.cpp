class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int leftsum =0;
        int n = cardPoints.size();

        for(int i =0;i<k;i++){
            leftsum+=cardPoints[i];
        }
        int rightsum =0;
        int maxsum = leftsum;
        int right = n-1;

        for(int i = k-1;i>=0;i--){
            leftsum -= cardPoints[i];
            rightsum += cardPoints[right];
            right--;
            maxsum = max(maxsum,rightsum+leftsum);
        }
        return maxsum;
    }
};