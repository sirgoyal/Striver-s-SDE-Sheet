class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int n= heights.size();
        int ans=0;
        for(int i=0; i<=n; i++)
        {
            while(!s.empty() && (i==n|| heights[i]<= heights[s.top()]))
            {
                int h= heights[s.top()];
                s.pop();
                int w;
                if(s.empty())
                    w=i;
               else w=i-s.top()-1;
                ans= max(ans, w*h);
            }
            s.push(i);
        }
        return ans;
    }
};