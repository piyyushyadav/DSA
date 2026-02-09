class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int curr = 1;
        int i = 0;
        vector<int> ans;
      while(ans.size()<k){

        if(i<arr.size()  &&  arr[i] == curr){
            i++;
        }
        else{
            ans.push_back(curr);
             }
        curr++;
      }

      return ans[k-1];
    }
};