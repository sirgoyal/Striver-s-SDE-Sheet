
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    unordered_set<int> s;
    int ans= 0;
    for(auto it: arr)
    {
        s.insert(it);
    }
    for(auto n: s)
    {
        if(s.find(n-1)==s.end())
        {
            int curr=n;
            int len=1;
            while(s.count(curr+1))
            {
                curr++;
                len++;
            }
            ans= max(len, ans);
        }
    }
    return ans;
}