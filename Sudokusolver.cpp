class Solution {
public:
    void solve(int r, int c, vector<vector<char>>& board,  vector<vector<int>> &row,  vector<vector<int>> &col,  vector<vector<int>> &grid, bool &flag){
       
        
        for(int i=r; i<9; i++)
        {
            for(int j=c; j<9; j++)
            {
                if(board[i][j]=='.')
                {
                    for(char c='1'; c<='9'; c++)
                    {
                        if(row[i][c-'0']==0 && col[j][c-'0']==0 && grid[(i/3)*3 + j/3][c-'0']==0)
                        {
                            board[i][j]=c;
                            row[i][c-'0']=1;
                            col[j][c-'0']=1;
                            grid[(i/3)*3 + j/3][c-'0']=1;
                            solve(i, 0, board, row, col, grid, flag);
                            if(flag==0)
                            {
                                board[i][j]='.';
                                 row[i][c-'0']=0;
                            col[j][c-'0']=0;
                            grid[(i/3)*3 + j/3][c-'0']=0; 
                            }
                            else return;
                        }
                    }
                    return;
                }
            }
        }
        flag=1;
    }
    void solveSudoku(vector<vector<char>>& board) {
        vector<vector<int>> row(9, vector<int>(10, 0));
        vector<vector<int>> col(9, vector<int>(10, 0));
        vector<vector<int>> grid(9, vector<int>(10, 0));
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(board[i][j]!='.')
                {
                    row[i][board[i][j]-'0']=1;
                    col[j][board[i][j]-'0']=1;
                    grid[(i/3)*3 +j/3][board[i][j]-'0']=1;
                }
            }
        }
        bool flag= 0;
        solve(0, 0, board, row, col, grid, flag);
    }
};