class Solution {
public:
bool all(vector<int> & piles ,int h , int mid){
    int count = 0;
    for(int x : piles){
        count+= x/mid;
    

        if(x%mid !=0){
            count++;
        }
    }
    if(count<=h){
        return true;
    }
    else{
        return false;
    }
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int  l = 1;
        int r  = *max_element(piles.begin(),piles.end());

        while(l<r){
            int mid = l + (r-l)/2;

            if(all(piles,h,mid)){
                r = mid ;
            }
            else{
                l = mid+1;
            }
        }
        return l;
    }
};