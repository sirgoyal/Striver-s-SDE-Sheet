int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    int n= start.size();
    vector<vector<int>> act(n, vector<int>(2));
    for(int i=0; i<n; i++)
    {
        act[i][0]=finish[i];
        act[i][1]=start[i];
    }
    sort(act.begin(), act.end());
    int a=1, e= act[0][0];
    for(int i=1; i<n; i++)
    {
        if(act[i][1]>=e)
        {
            a++;
            e= act[i][0];
        }
    }
    return a;
}