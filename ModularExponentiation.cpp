int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    if(n==0)
        return 1;
    long long mod= modularExponentiation(x, n/2, m);
    if(n%2)
        return (1LL*(1LL*mod*mod)%m*x%m);
    return (1LL*mod*mod)%m;
}