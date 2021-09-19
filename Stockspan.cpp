class StockSpanner {
public:
    stack<pair<int, int>> s;
    int i;
    StockSpanner() {
        i=0;
    }
    
    int next(int price) {
    
        while(!s.empty() &&  price>=s.top().first)
        {
            s.pop();
        }
        int ans;
        if(s.empty())
    {
        ans= i+1;
    }
      else  ans= i-s.top().second;
        s.push({price, i});
        i++;
        return ans;
            
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */