class Solution {
public:
    int trap(vector<int>& arr) {
        int n= arr.size();  
        int lmax=0;
    int rmax=0;
    int l=0, r=n-1;
    long res=0;
    while(l<=r)
    {
        if(arr[l]<=arr[r])
        {
            if(arr[l]<lmax)
            {
                res+= lmax-arr[l];
            }
            else lmax= arr[l];
            l++;
        }
        else{
            if(arr[r]<rmax)
            {
                res+=rmax-arr[r];
            }
            else rmax= arr[r];
            r--;
                
        }
    }
    return res;
    }
};