int maximumProfit(vector<int> &prices){
    // Write your code here.
    int buy= prices[0];
    int sell=-1;
    for(int i=0; i<prices.size(); i++)
    {
        if(prices[i]>buy)
        {
            sell = max(prices[i]-buy, sell);
        }
        else buy=prices[i];
    }
    return (sell==-1)?0:sell;
}