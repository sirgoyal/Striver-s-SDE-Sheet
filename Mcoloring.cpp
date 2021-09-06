bool isSafe(int node, vector<vector<int>> &mat, vector<int> &col, int color){
    for(int i=0; i<mat.size(); i++)
    {
        if(node!=i && mat[i][node] && col[i]==color)
            return false;
    }
    return true;
}
bool solve(int node, vector<vector<int>> &mat, int m, vector<int> &col){
    if(node==mat.size())
        return true;
    for(int i=1; i<=m; i++)
    {
        if(isSafe(node, mat, col, i)){
            col[node]=i;
            if(solve(node+1, mat, m, col))
                return true;
            col[node]=0;
        }
    }
    return false;
}
string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    int n= mat.size();
    vector<int> col(n, 0);
    if(solve(0, mat, m, col))
        return "YES";
    return "NO";
}