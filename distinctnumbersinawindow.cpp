class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        unordered_map<int,int> mp;
        int c=0;
        vector<int> ans;
        for(int i=0; i<n; i++)
        {
            mp[A[i]]++;
            if(mp[A[i]]==1)
            c++;
            if(i>=k-1)
            {
                ans.push_back(c);
                mp[A[i-k+1]]--;
                if(mp[A[i-k+1]]==0)
                c--;
            }
            
        }
        return ans;
    }
};