*****************************************************************************/

void setMatrixOnes(vector<vector<int>> &matrix, int n, int m)
{
    // Write your code here.
     int c=0;
        for(int i=0; i<matrix.size(); i++)
        {
            if(matrix[i][0]==1)
                c=1;
            for(int j=1; j<matrix[0].size(); j++)
            {
                if(matrix[i][j]==1)
                    matrix[i][0]= matrix[0][j]=1;
            }
            
        }
        for(int i= matrix.size()-1; i>=0; i--)
        {
            
            for(int j=matrix[0].size()-1; j>=1; j--)
            {
                if(matrix[i][0]==1 || matrix[0][j]==1)
                    matrix[i][j]=1;
           
            }
             if(c==1)
                matrix[i][0]=1;
            
        }
        
}

