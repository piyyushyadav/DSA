class StockSpanner {
public:

stack<pair<int,int>> st;

    StockSpanner() {
        
    }
    
    int next(int price) {
        int spam = 1;

        while(!st.empty() && st.top().first <=price){
           
                spam = spam+st.top().second;
                st.pop();
            
        }

        st.push({price,spam});
        return spam;
    }
        
};

