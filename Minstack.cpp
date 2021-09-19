class MinStack {
public:
    /** initialize your data structure here. */
    long long mn;
    stack<long long> s;
    MinStack() {
        
    }
    
    void push(int val) {
    
        if(s.empty()){
            mn=val;
            s.push(val);
        }
       else if(val<mn){
           s.push(2LL*val-mn);
           mn= val;
       }
        else s.push(val);
    }
    
    void pop() {
       if(s.top()<mn)
       {
           mn= 2*mn-s.top();
          
       }
         s.pop();
    }
    
    int top() {
        if(s.top()<mn)
            return mn;
        else return s.top();
    }
    
    int getMin() {
        return mn;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */