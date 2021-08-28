int findMinimumCoins(int amount) 
{
    // Write your code here
    int c=0;
    vector<int> den= {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    for(int i=8; i>=0; i--)
    {
        if(amount>=den[i])
        {
            c+=amount/den[i];
            amount%=den[i];
        }
    }
    return c;
}