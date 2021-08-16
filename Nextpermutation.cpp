void nextPermutation(vector<int>& permutation) {
        int n= permutation.size();
        if(n<=1)
        return ;
    int i= n-1;
    
    for(; i>=1; i--)
    {
        if(permutation[i]>permutation[i-1])
        {
           int j= i-1;
            for(int k=n-1; k>j; k--)
            {
                if(permutation[j]<permutation[k]){
                    swap(permutation[j], permutation[k]);
                    reverse(permutation.begin()+j+1, permutation.end());
                    return;
                }
            }
        }
        
    }
    if(i==0)
        reverse(permutation.begin(), permutation.end());
    }