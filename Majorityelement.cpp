int findMajorityElement(int *arr, int n) {
	// Write your code here.
    int ele= arr[0];
    int c=1;
    for(int i=1; i<n; i++)
    {
        if(arr[i]==ele)
            c++;
        else{
            c--;
            if(c==0)
            {    ele= arr[i];
            c=1;
            }
        }
    }
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==ele)
            cnt++;
    }
    return (cnt>n/2)?ele:-1;
}