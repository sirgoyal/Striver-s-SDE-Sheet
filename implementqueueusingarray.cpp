class Queue {
public:
    int top=-1, f=0;
    vector<int> v;
    Queue() {
        // Implement the Constructor
        v.resize(5000);
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(f>top)
            return 1;
        return 0;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        v[++top]= data;
    }

    int dequeue() {
        // Implement the dequeue() function
int ans=-1;        
         if(f<=top)
        {
        ans= v[f];
             f++;
        }
        return ans;
    }

    int front() {
        // Implement the front() function
        if(top>=f)
        {
            return v[f];
        }
        else return -1;
    }
};