class Solution {
public:

  long long maxArrayValue(vector<int>& nums) {
   int n = nums.size();


   stack<long long> st;
   st.push(nums[n-1]);


   for(int  i =n-2 ;i>=0;i--){

    long long a = nums[i];
    if(!st.empty() && st.top()>= a){
      a = st.top()+a;
     st.pop();
    }
    st.push(a);

   }
    int  m = st.size();
    vector<long long> vt;

    for(int  i =0;i<m;i++){
        vt.push_back(st.top());
        st.pop();

    }

    

    long long ans =  *max_element(vt.begin(),vt.end());

    return ans;

        
    }
};