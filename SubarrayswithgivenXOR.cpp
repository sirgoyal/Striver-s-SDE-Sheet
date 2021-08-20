int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int xorr=0;
    int cnt=0;
    unordered_map<int, int> f;
    for(auto it: arr)
    {
        xorr^=it;
        if(xorr==x)
            cnt++;
        if(f.find(xorr^x)!=f.end())
            cnt+= f[xorr^x];
        f[xorr]++;
    }
    return cnt;
}