class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    int n= s.size();
		    int m= 1<<n;
		    vector<string> ans;
		    for(int i=0; i<m; i++)
		    {
		       string sub= "";
		        for(int j=0; j<n; j++)
		        {
		            if(i&(1<<j))
		            sub+=s[j];
		        }
		        if(sub.size()>0)
		        ans.push_back(sub);
		    }
		    sort(ans.begin(), ans.end());
		    return ans;
		}
};
