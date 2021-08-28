int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int zc=0;
    int s=0;
    int e=0;
    int ans=0;
    while(e<n)
    {
        if(arr[e]==0)
        {    zc++;
         if(zc>k)
         {
             ans= max(e-s, ans);
             while(s< arr.size() && zc>k){
                 if(arr[s]==0)
                     zc--;
                s++;
             }
         }
        }
        e++;
    }
    ans= max(e-s, ans);
    return ans;
}
