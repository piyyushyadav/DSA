class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        int  i = 0;
        int  j = n-1;
        vector<int> pos;
        vector<int> neg;


        for(int x:nums){
            if(x>0){
                pos.push_back(x);
            }

            else{
                neg.push_back(x);
            }
        }

        vector<int> ans(n);

    
       
        int x =0;
        int y =0;
        for(int i =0;i<n;i+=2){
            ans[i] = pos[x];
            x+=1;

        }

        for(int i =1;i<n;i+=2){
            ans[i] = neg[y];
            y+=1;
        }

        return ans;
        

        
    }
};