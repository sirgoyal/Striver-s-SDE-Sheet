class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool possible(int A[], int n, int k, int mx){
        int sum=0;
        for(int i=0; i<n; i++)
        {
            if(sum+A[i]>mx)
            {
                sum=A[i];
                k--;
            }
            else sum+=A[i];
            if(k==0)
            return false;
        }
        return true;
    }
    int findPages(int A[], int N, int M) 
    {
        //code here
        int s=A[0];
        for(int i=1; i<N; i++)
        {
            s=max(A[i], s);
        }
        int e=0;
        for(int i=0; i<N; i++)
        {
            e+=A[i];
        }
        int ans=-1;
        while(s<=e)
        {
            int mid= (s+e)>>1;
            if(possible(A, N, M, mid))
            {
                ans= mid;
                e= mid-1;
            }
            else s= mid+1;
        }
        return ans;
    }
};