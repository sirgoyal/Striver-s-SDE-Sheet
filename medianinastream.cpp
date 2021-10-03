class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> l;
    priority_queue<int, vector<int>, greater<int>> r;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(l.empty())
            l.push(num);
        else if(l.size()== r.size())
        {
            if(num<=r.top())
                l.push(num);
            else 
                r.push(num);
        }
        else{
            if(l.size()>r.size())
            {
                if(num>=l.top())
                    r.push(num);
                else {
                    r.push(l.top());
                    l.pop();
                    l.push(num);
                }
            }
            else {
                if(num<=r.top())
                    l.push(num);
                else {
                    l.push(r.top());
                    r.pop();
                    r.push(num);
                }
            }
        }
        
    }
    
    double findMedian() {
        if(l.size()==r.size())
            return (l.top()+r.top())/2.0;
        else {
            return (l.size()>r.size())?l.top():r.top();
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */