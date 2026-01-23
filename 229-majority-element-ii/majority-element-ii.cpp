class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 =0 ;

        int ele1 =  0;


        int count2 =0 ;

        int ele2 = 1;



        for(int i =0 ;i<nums.size();i++){


            if(nums[i] == ele1){
                count1 ++;
            }
           else if(nums[i] == ele2){
            count2++;
           }


           else if(count1 ==0){

            ele1  = nums[i];
            count1++;
           }

           else if(count2 == 0){
            ele2 = nums[i];
            count2++;
           }

           else{
            count1--;
            count2--;
           }
        }


        int fre1 = 0;

        int fre2 = 0;


        vector<int> ans;

        int n = nums.size();
        for(int  i = 0 ;i<nums.size();i++){
            if(nums[i] == ele1){
                fre1++;
                
            }


         else if(nums[i] == ele2){
            fre2++;
            
         }
        }

          if(fre1>n/3){
            ans.push_back(ele1);
         }

         if(fre2>n/3){
            ans.push_back(ele2);
         }
         return ans;

        }

        


    
};