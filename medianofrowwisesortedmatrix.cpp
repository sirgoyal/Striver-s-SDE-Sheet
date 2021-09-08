class Solution{   
public:
int bs(vector<int> &B, int mid){
    int l=0, r= B.size()-1;
    while(l<=r){
        int md= (l+r)>>1;
        if(B[md]<=mid)
        l=md+1;
        else r=md-1;
    }
    return l;
}
    int median(vector<vector<int>> &A, int r, int c){
        // code here  
        int mn= INT_MAX, mx= INT_MIN;
        for(int i=0; i<r; i++)
    {
        mn= min(A[i][0], mn);
        mx= max(A[i][c-1], mx);
    }
    int req= r*c/2;
    while(mn<=mx){
        int mid= (mn+mx)>>1;
        int cnt=0;
        for(int i=0; i<r; i++)
        {
            cnt+= bs(A[i], mid);
        }
        if(cnt<=req)
        {
            mn=mid+1;
        }
        else mx= mid-1;
    }
    return mn;
    }
};