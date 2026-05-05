class Solution {
public:
    int mySqrt(int x) {
    long long l = 1;
    long long e = x/2;
    int ans =0 ;
    if (x < 2) return x;
    while(l<=e){
        long long mid = l+ (e-l)/2;

        if(mid <= x/mid){
            ans =  mid;
            l = mid+1;
            
        }
        else{
            e  = mid-1;
        }



    } 
    return ans;
        

    }
};