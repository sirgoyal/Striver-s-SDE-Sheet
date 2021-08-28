struct meet{
    int s;
    int e;
    int pos;
};
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    int n= start.size();
    vector<meet> v(n);
    for(int i=0; i<n; i++)
    {
        v[i].s= start[i];
        v[i].e= end[i];
        v[i].pos= i+1;
    }
    sort(v.begin(), v.end(), [&](meet &m1, meet &m2){
        if(m1.e==m2.e)
            return m1.pos<m2.pos;
        return m1.e<m2.e;
    });
    vector<int> ans;
    int l= v[0].e;
    ans.push_back(v[0].pos);
    for(int i=1; i<n; i++)
    {
        if(v[i].s>l)
        {
            ans.push_back(v[i].pos);
            l=v[i].e;
        }
    }
    return ans;
}