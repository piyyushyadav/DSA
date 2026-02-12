class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        int n = operations.size();
        for(int i = 0;i<n;i++){
           
             if(operations[i] == "+"){
                int a = ans.back() + ans[ans.size() - 2];

                ans.push_back(a);
            }
            else if(operations[i] == "D"){
                int c = 2*ans.back();
                ans.push_back(c);
            }
            else if(operations[i]=="C"){
                ans.pop_back();
            }

            else{
                ans.push_back(stoi(operations[i]));
            }

        }
        int ans1 = accumulate(ans.begin(),ans.end(),0);
        return ans1;
    }
};