class Solution{
    public:
    void solve(int x, int y, vector<vector<int>> &m, int n, vector<string> &ans, vector<vector<int>> &vis, string &move){
        if(x==n-1 && y==n-1)
        {
            ans.push_back(move);
            return;
        }
        string moves= "DLRU";
        int dx[]= {1, 0, 0, -1};
        int dy[]= {0, -1, 1, 0};
        for(int i=0; i<4; i++)
        {
            int nx= x+dx[i];
            int ny= y+dy[i];
            if(nx>=0 && ny>=0 && nx<n && ny<n && !vis[nx][ny] && m[nx][ny])
            {
                vis[x][y]=1;
                move+=moves[i];
                solve(nx, ny, m, n, ans, vis, move);
                move.pop_back();
                vis[x][y]=0;
            }
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        vector<vector<int>> vis(n, vector<int>(n, 0));
        string move= "";
        if(m[0][0])
        solve(0, 0, m, n, ans, vis, move);
        return ans;
    }
};

  