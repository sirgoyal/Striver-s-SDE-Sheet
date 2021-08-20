int uniquePaths(int m, int n) {
	// Write your code here.
    int r= n-1;
    int d= m-1;
    n= r+d;
    long long num=1;
    for(int i=n; i>n-r; i--)
        num*=i;
    for(int i=2; i<=r; i++)
        num/=i;
    return num;
}