class Solution {
public:
    void solve(int c, int n, vector<string> &board,  vector<int> &l, vector<int> &ld, vector<int> &ud,   vector<vector<string>> &ans){
        if(c==n)
            ans.push_back(board);
        for(int r=0; r<n; r++){
        if(l[r]==0 && ld[r+c]==0 && ud[n-1 + r-c]==0){
            board[r][c]='Q';
            l[r]=1;
            ld[r+c]=1;
            ud[n-1+r-c]=1;
            solve(c+1, n, board, l, ld, ud, ans);
            l[r]=0;
            ld[r+c]=0;
            ud[n-1+r-c]=0;
            board[r][c]='.';
        }
           }
    }
    vector<vector<string>> solveNQueens(int n) {
     vector<string> board(n);
        string s;
        for(int i=0; i<n; i++)
            s+='.';
        for(int i=0; i<n; i++)
            board[i]=s;
        vector<int> l(n, 0);
        vector<int> ld(2*n -1, 0);
        vector<int> ud(2*n -1, 0);
        vector<vector<string>> ans;
        solve(0, n, board, l, ld, ud, ans);
     return ans;   
    }
};