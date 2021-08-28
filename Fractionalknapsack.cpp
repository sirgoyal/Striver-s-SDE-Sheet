double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
sort(items.begin(), items.end(), [&](pair<int, int> i1, pair<int,int> i2){
    return (double)i1.second/i1.first > (double)i2.second/i2.first;
});
    double ans=0;
    for(int i=0; i<n && w>0; i++)
    {
        if(w> items[i].first)
        {
            ans+=items[i].second;
            w-=items[i].first;
        }
        else {
          
            ans+= (1.0*items[i].second/items[i].first)*w;
              w=0;
        }
    }
    return ans;
}