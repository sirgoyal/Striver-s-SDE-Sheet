class Solution {
public:
    // TC: O(N^2)
    /*int solve(int i, int j, string &t1, string &t2,  vector<vector<int>> &dp){
        if(i==t1.size() || j==t2.size())
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(t1[i]==t2[j])
dp[i][j]= 1+ solve(i+1, j+1, t1, t2, dp);
        else dp[i][j]= max(solve(i+1, j, t1, t2, dp), solve(i, j+1, t1, t2, dp));
        return dp[i][j];
    }
    int longestCommonSubsequence(string t1, string t2) {
        
        vector<vector<int>> dp(t1.size()+1, vector<int>(t2.size()+1, -1));
        return solve(0, 0, t1, t2, dp);
        
    }*/
    
    //TC: O(N)
    int longestCommonSubsequence(string t1, string t2) {
        if(t1.size()<t2.size())
            return longestCommonSubsequence(t2, t1);
        
        vector<int> prev(t2.size()+1, 0);
        vector<int> curr(t2.size()+1);
        for(int i=1; i<=t1.size(); i++)
        {
            for(int j=1; j<=t2.size(); j++)
            {
                if(t1[i-1]==t2[j-1])
                    curr[j]= prev[j-1]+1;
                else curr[j]= max(curr[j-1], prev[j]);
            }
            prev= curr;
        }
        return curr[t2.size()];
    }
};