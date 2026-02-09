class Solution {
public: 
int pivitele(vector<int>&nums){
    int n = nums.size();
    int l =0;   
    int r = n-1;

    while(l<r){
        int mid = l+ (r-l)/2;
        if(nums[mid]>nums[r]){
            l = mid +1;
        }
        else{
            r = mid;
        }
    }

    return r;
}

int binary(int l,int r, vector<int>&nums,int target){
    int n = nums.size();

    while(l<=r){
        int mid = l + (r-l)/2;

        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid]<target){
            l = mid+1;

        }
        else{
            r = mid-1;
        }
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        int n  = nums.size();

        int pivit = pivitele(nums);
        int a  = -1;

        a = binary(0,pivit-1,nums,target);
        if(a != -1){
            return a;
        }
        else{
            return binary(pivit,n-1,nums,target);
        }

        
    }
};