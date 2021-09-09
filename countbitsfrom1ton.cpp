int bits(int n)
{
    int c=0;
    while(n)
    {
        n=n>>1;
        c++;
    }
    return c;
}
    int countSetBits(int n)
    {
        // Your logic here
        int m= bits(n);
        int ans=0;
        n++;
        for(int i=0; i<m; i++)
        {
            int a= pow(2, i+1);
            int p= n/a;
            ans+=p*(a/2);
            if(n%a && n%a>a/2)
            {
                ans+= n%a -a/2;
            }
            
        }
        return ans;
    }
};


