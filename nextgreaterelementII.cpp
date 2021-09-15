class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n= nums.size();
        stack<int> s;
        vector<int> v(n);
        for(int i=2*n-1; i>=0; i--)
        {
            int a= nums[i%n];
            while(s.size() && s.top()<=a)
                s.pop();
            if(s.empty())
                v[i%n]=-1;
            else v[i%n]=s.top();
            s.push(a);
        }
        return v;
    }
};