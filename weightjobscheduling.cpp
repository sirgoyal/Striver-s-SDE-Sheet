#include<bits/stdc++.h>
struct job{
    int s;
    int e;
    int pr;
};
long long solve(int ind, int n, vector<job> &jobs, vector<long long> &dp){
    if(ind==n-1)
        return jobs[ind].pr;
    if(dp[ind]!=-1)
        return dp[ind];
    long long exc= solve(ind+1, n, jobs, dp);
    long long inc= jobs[ind].pr;
    int st= ind+1;
    int en= n-1;
    int ans=n;
    while(st<=en)
    {
        int mid= (st+en)/2;
        if(jobs[mid].s>= jobs[ind].e)
        {
            ans=mid;
            en=mid-1;
        }
        else st=mid+1;
    }
    
    if(ans!=n)
         inc+= solve(ans, n, jobs, dp);
    dp[ind]= max(inc, exc);
}
long long int findMaxProfit(vector<int> &start, vector<int> &end, vector<int> &profit)
{
    // Write your code here.
    int n= start.size();
    vector<job> jobs(n);
    for(int i=0; i<n; i++)
    {
        jobs[i].s= start[i];
        jobs[i].e=  end[i];
        jobs[i].pr= profit[i];
    }
    sort(jobs.begin(), jobs.end(), [&](job &j1, job &j2){
        if(j1.s==j2.s){
            if(j1.e==j2.e)
                j1.pr>j2.pr;
        return j1.e<j2.e;
        }
        return j1.s<j2.s;
    });
    vector<long long int> dp(n+1, -1);
    return solve(0, n, jobs, dp);
}
