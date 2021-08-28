int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
  sort(at, at+n);
    sort(dt, dt+n);
    int ans=1, curr=1;
    int i=0, j=1;
    while(i<n && j<n){
        if(at[j]<=dt[i])
        {
            j++;
            curr++;
        }
        else{
            i++;
            curr--;
        }
        if(curr>ans)
            ans=curr;
        
    }
    return ans;
}