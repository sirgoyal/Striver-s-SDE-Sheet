class Solution
{
public:
int solve(int s, string A, set<string> &dict, vector<int> &dp){
    if(s==A.size())
    return 1;
    if(dp[s]!=-1)
    return dp[s];
    for(int i=s; i<A.size(); i++)
    {
        if(dict.count(A.substr(s, i-s+1)) && solve(i+1, A, dict, dp))
        return dp[s]=true;
    }
    return dp[s]=false;
}
    int wordBreak(string A, vector<string> &B) {
        //code here
        vector<int> dp(A.size()+1, -1);
        set<string> dict;
        for(auto w: B){
            dict.insert(w);
        }
        return solve(0, A, dict, dp);
    }
};