
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    int sum=0, sqsum=0;
    int actsum=0; int actsumsq=0;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
        sqsum+= arr[i]*arr[i];
        actsum+= i+1;
        actsumsq+= (i+1)*(i+1);
    }
int sub= sum-actsum;
    int add= (sqsum- actsumsq)/sub;
    pair<int, int> ans;
    ans.first= (add-sub)/2;
    ans.second= (add+sub)/2;
    return ans;
	
}
