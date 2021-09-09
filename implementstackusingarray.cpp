vector<int> v(101);
int top=-1;
//Function to push an integer into the stack.
void MyStack :: push(int x)
{
    // Your Code
    v[++top]= x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code
    if(top==-1)
    return -1;
    top--;
    return v[top+1];
}
