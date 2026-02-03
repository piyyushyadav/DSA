class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalin = accumulate(gas.begin(),gas.end(),0);
        int totalout = accumulate(cost.begin(),cost.end(),0);

        if(totalout>totalin){
            return -1;
        }
        int n = gas.size();
        int result = 0 ;
        int total = 0;


        for(int i =0;i<n;i++){
            total += gas[i] - cost[i];
            if(total<0){
                result = i+1;
                total =0 ;
            }            
        }

        return result;
    }
};