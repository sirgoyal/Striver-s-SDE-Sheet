class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    //TC: O(N^2)
    /*int solve(int i, int n, int W, int wt[], int val[], vector<vector<int>> &dp){
        if(i==n)
        return 0;
        if(dp[i][W]!=-1)
        return dp[i][W];
        dp[i][W]= solve(i+1,n, W, wt, val, dp);
        if(W>=wt[i])
        {
            dp[i][W]= max(dp[i][W], (val[i]+solve(i+1, n, W-wt[i], wt, val, dp)));
        }
        return dp[i][W];
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       
       vector<vector<int>> dp(n+1, vector<int>(W+1, -1));
       return solve(0,n, W, wt, val, dp);
    } */
    
    //TC: O(N)
     int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       
       vector<int> dp(W+1, 0);
       for(int i=1; i<=n; i++)
       {
           for(int w= W; w>=0; w--)
           {
               if(wt[i-1]<=w)
               {
                   dp[w]= max(dp[w],val[i-1] + dp[w-wt[i-1]]);
               }
           }
       }
       return dp[W];
    }
    
};