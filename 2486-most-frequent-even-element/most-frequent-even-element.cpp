class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<int> ans;


        for(int x: nums){
            if(x%2==0){
                ans.push_back(x);
            }
        }


         unordered_map<int, int> freq;


         int n = ans.size();
         for(int i = 0 ; i<n;i++){
            freq[ans[i]]+=1;
         }

         int max = 0 ; 
         int ans1  =0;
        for(auto & i : freq){
           if (i.second > max ||
               (i.second == max && i.first < ans1)) {
                max = i.second;
                ans1 = i.first;
            }
        }

        if(n ==  0 ){
            return -1;
        }
        else{
            return ans1;
        }
    }
};