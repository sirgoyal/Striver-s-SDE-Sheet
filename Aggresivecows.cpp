#include <bits/stdc++.h>
using namespace std;
bool possible(vector<int> b, int n, int c, int mn)
{
	c--;
	int prev= b[0];
	for(int i=1; i<n; i++)
	{
		if(b[i]-prev>=mn)
		{
			prev=b[i];
			c--;
		}
		if(c==0)
		return 1;
	}
	return 0;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n, c;
		cin>>n>>c;
		vector<int> b(n);
		for(int i=0; i<n; i++)
		{
			cin>>b[i];
		}
		sort(b.begin(), b.end());
		int s= 1;
		int e= b[n-1]-b[0];
		int ans=1;
		while(s<=e)
		{
			int mid= (s+e)>>1;
			if(possible(b, n, c, mid))
			{
				ans= mid;
				s= mid+1;
			}
			else e= mid-1;
		}
		cout<<ans<<endl;
		
	}
	return 0;
}