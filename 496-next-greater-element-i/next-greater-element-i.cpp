class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
    
        vector<int> ans(n,-1);

        
         

        for(int  i =0 ;i<n;i++){
             
            int ele  = -1;
            for(int j =0 ; j<m;j++){
                if(nums1[i] == nums2[j]){
                    ele = j;
                    break;
                }
            }

                for(int k = ele+1 ;k<m;k++){
                    if(nums2[k]>nums1[i]){
                        ans[i] = nums2[k];
                        break;
                    }
                }
            

            
            
        }

        return ans;

       
    }
};