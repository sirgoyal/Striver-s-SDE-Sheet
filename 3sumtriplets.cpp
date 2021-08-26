vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size(); i++)
    {
        if(i>0 && arr[i-1]==arr[i])
            continue;
        int j=i+1, k= arr.size()-1;
        while(j<k)
        {
            if(j>i+1 && arr[j-1]==arr[j])
            {
                j++;
                continue;
            }
            if(k<arr.size()-1 && arr[k]==arr[k+1]){
                k--;
                continue;
            }
            if(arr[j]+arr[k]==K-arr[i])
            {
                ans.push_back({arr[i], arr[j], arr[k]});
                k--;
                j++;
            }
            else if(arr[j]+arr[k]<K-arr[i])
            {
                j++;
            }
            else k--;
        }
       
    }
    return ans;
}