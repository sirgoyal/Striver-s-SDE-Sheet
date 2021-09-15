class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> q1, q2;
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q2.push(x);
        while(!q1.empty())
        {
            int t= q1.front();
            q1.pop();
            q2.push(t);
            
        }
        swap(q1, q2);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int ans= q1.front();
        q1.pop();
        return ans;
    }
    
    /** Get the top element. */
    int top() {
        return q1.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
       return q1.empty()?1:0;
    }
};

