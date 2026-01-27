class Solution {
public:
  int leftele(vector<int> nums,int target){

    int n  = nums.size();

    int l =0;
    int r = n-1;
    int le  =-1;

    while(l<=r){
        int mid=  l +(r-l)/2;

        if(nums[mid] == target){
            le =mid;
            r = mid-1;
        }
        else if(target>nums[mid]){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return le;

  }

    int rightele(vector<int> nums,int target){

    int n  = nums.size();

    int l =0;
    int r = n-1;
    int re  =-1;

    while(l<=r){
        int mid=  l +(r-l)/2;

        if(nums[mid] == target){
            l = mid+1;
            re = mid;
        }
        else if(target>nums[mid]){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }

    return re;






  }


    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;

        int left = leftele(nums,target);

        int right = rightele(nums,target);


        ans.push_back(left);
        ans.push_back(right);

        return ans;
    }
};