#include<bits/stdc++.h>

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
  vector<vector<int>> ans;
    if(intervals.size()<=1)
        return intervals;
    sort(intervals.begin(), intervals.end());
    ans.push_back({intervals[0][0], intervals[0][1]});
    for(int i=1; i<intervals.size(); i++)
    {
        if(intervals[i][0]<=ans.back()[1])
            ans.back()[1]= max(ans.back()[1],intervals[i][1]);
        else ans.push_back({intervals[i][0], intervals[i][1]});
    }
    return ans;
}
