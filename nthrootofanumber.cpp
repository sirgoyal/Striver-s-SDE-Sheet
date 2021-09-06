#include <bits/stdc++.h>

using namespace std;

double fpow(double x, int y)
{
    if(y==0)
    return 1;
    double prod= fpow(x, y/2);
    if(y%2)
    return prod*prod*x;
    return prod*prod;
}
void solve(int m, int n){
    double low= 1;
    double high= m;
    double eps= 1e-6;
    while(high-low>eps){
        double mid= (high+low)/2;
        if(fpow(mid, n)>m)
        high=mid;
        else low= mid;
    }
    cout<<low<<endl;
}

int main()
{
    int m, n;
    cin>>m>>n;
    solve(m, n);

    return 0;
}
