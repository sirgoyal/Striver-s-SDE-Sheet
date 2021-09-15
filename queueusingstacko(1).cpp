class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> in, out;
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        in.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int t;
        if(!out.size())
        {
        while(in.size())
        {
            out.push(in.top());
                in.pop();
        }
        }
        t=out.top();
        out.pop();
        return t;
        
        
    }
    
    /** Get the front element. */
    int peek() {
        if(!out.size())
        {
        while(in.size())
        {
            out.push(in.top());
                in.pop();
        }
        }
        return out.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(!out.size() && !in.size())
            return 1;
        return 0;
    }
};
