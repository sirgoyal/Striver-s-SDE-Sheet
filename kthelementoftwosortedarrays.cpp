class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        if(n>m)
        {
            return kthElement(arr2, arr1, m, n, k);
        }
        int cut= min(n, k-1);
        int cut2= k-cut-1;
        
        
        while(1)
        {
            int l1= cut==0?INT_MIN: arr1[cut-1];
        int l2= cut2==0?INT_MIN: arr2[cut2-1];
        int r1= cut==n?INT_MAX: arr1[cut];
        int r2= cut2==m? INT_MAX: arr2[cut2];
        if(l1<=r2 && l2<=r1)
        return min(r1, r2);
        if(l1>r2)
        {
            cut--;
            cut2++;
        }
        else {
            cut++;
            cut2--;
        }
        }
        return 0;
    }
};
