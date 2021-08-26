int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
    int i=0, j=1;
    while(j<n)
    {
        if(arr[i]!=arr[j])
        {
            i++;
            arr[i]=arr[j];
        }
j++;
    }
    return i+1;
}