int ZeroPairSum(int n, vector<int> arr){
    // Write your code here
    int c=0;
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        mp[arr[i]]++;
    }
    
    for(auto it: mp)
    {
        int curr= it.first;
        if(curr!=0 && mp.find(-curr)!=mp.end())
            c+= mp[curr]*mp[-curr];
    }
    if(mp.find(0)!= mp.end())
        c+= mp[0]*(mp[0]-1);
return c/2;
}