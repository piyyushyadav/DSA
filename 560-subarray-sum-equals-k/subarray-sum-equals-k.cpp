class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> prefix1;
        prefix1.push_back(0);
        

        for(int x: nums){
            prefix1.push_back(prefix1.back()+x);
        }
    



    unordered_map<int,int> map;
    map[0] =1;
    int count =0;
    int n = prefix1.size();
    for(int  i =  1;i<n;i++){
        


        int val = prefix1[i] - k;

        if(map.find(val) != map.end()){
            count += map[val];
        }

        
        map[prefix1[i]] += 1;


    }
    return count;
    }
};