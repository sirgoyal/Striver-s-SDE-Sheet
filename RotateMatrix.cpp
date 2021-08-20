
void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int top=0;
    int bottom=n-1;
    int left=0;
    int right= m-1;
    while(top<bottom && left<right)
    {
        int temp= mat[top][right];
        for(int i=right; i>left; i--)
        {
            mat[top][i]=mat[top][i-1];
        }
        int temp2= mat[bottom][right];
        for(int i= bottom; i>top; i--)
        {
            mat[i][right]= mat[i-1][right];
        }
        mat[top+1][right]=temp;
        int temp3= mat[bottom][left];
        for(int i= left; i<right; i++)
        {
            mat[bottom][i]= mat[bottom][i+1];
        }
        mat[bottom][right-1]= temp2;
        for(int i=top; i<bottom; i++)
        {
            mat[i][left]= mat[i+1][left];
        }
        mat[bottom-1][left]= temp3;
        left++;
        right--;
        top++;
        bottom--;
    }

}