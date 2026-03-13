class Solution {
public:

int solvepivit(vector<int> &nums){
    int  n = nums.size();
  int  l = 0;
  int r  = n-1;

  while(l<r){
    int mid =  l +(r-l)/2;

    if(nums[mid]>nums[r]){
        l = mid+1;
    }
    else{
        r = mid;
        
    }
    


  }
  return r;
}

int binarys(int l,int r,vector<int> &nums,int target){
    int  n = nums.size();
    int index = -1;

    while(l<=r){
        int mid = l +(r-l)/2;
        if(nums[mid] == target){
            return  mid;
        }
        else if(nums[mid]<target){
            l = mid+1;
        }
        else{
            r = mid-1;
        }

    }

    return index;
}
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivit =  solvepivit(nums);

       int ans = binarys(0,pivit-1,nums,target);
       if(ans != -1){
        return ans;
       }
       ans = binarys(pivit,n-1,nums,target);

       return ans;
       
    }
};