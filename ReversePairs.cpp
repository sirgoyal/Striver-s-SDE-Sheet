
void merge(int l, int r, vector<int> &arr, vector<int> &temp, int &cnt)
{
    if(l<r)
    {
        int mid= l+(r-l)/2;
        if(mid>l)
        {
            merge(l, mid, arr, temp, cnt);
            merge(mid, r, arr, temp, cnt);
            int left= l;
            int m= mid;
            int k= l;
            for(; left<mid; left++)
            {
                while(m<r && arr[left]>2LL*arr[m])
                {
                    m++;
                }
                cnt+= m-(mid);
            }
            int right= mid;
            left=l;
            while(left<mid && right<r)
            {
                if(arr[left]<=arr[right])
                    temp[k++]= arr[left++];
                else {
                    temp[k++]= arr[right++];
                }
            }
            while(left<mid)
                temp[k++]= arr[left++];
            while(right<r)
                temp[k++]= arr[right++];
        
            for(; l<r; l++)
                arr[l]= temp[l];
        }
        
    }
}
int reversePairs(vector<int> &arr, int n){
	// Write your code here.	
    vector<int> temp(n);
    int cnt=0;
    merge(0, n, arr, temp, cnt);
    return cnt;
}