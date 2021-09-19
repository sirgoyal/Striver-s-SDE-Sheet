
class Solution
{
    public:
    //Function to find maximum of minimums of every window size.
    vector <int> maxOfMin(int arr[], int n)
    {
        // Your code here
        stack<int> s;
        vector<int> w(n, 0);
         vector<int> ans(n, 0);
        for(int i=0; i<=n; i++)
        {
            while(!s.empty() && (i==n|| arr[s.top()]>=arr[i]))
            {
                int ind= s.top();
                s.pop();
                if(s.empty())
                w[ind]= i;
                else w[ind]= i-s.top()-1;
            ans[w[ind]-1]= max(arr[ind], ans[w[ind]-1]);     
            }
            s.push(i);
        }
      
        for(int i=n-2; i>=0; i--)
        {
        
            ans[i]=max(ans[i],ans[i+1]);
        }
        return ans;
    }
};