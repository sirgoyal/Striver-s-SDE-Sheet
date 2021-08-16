#include<bits/stdc++.h>
void merge(long long *&arr, vector<long long> &temp, int lo, int hi, long long &inv){
    if(hi>lo && hi-lo>1)
    {
        int mid= lo + (hi-lo)/2;
        merge(arr, temp, lo, mid, inv);
        merge(arr, temp, mid, hi, inv);
       int i= lo;
 int j= mid;
    int k= lo;
    while(i<mid && j<hi)
    {
        if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i++];
        }
        else {
            temp[k++]=arr[j++];
            inv+= mid-i;
        } 
    }
    while(i<mid)
        temp[k++]= arr[i++];
    while(j<hi)
        temp[k++]= arr[j++];
    for(i= lo; i<hi; i++)
    {
        arr[i]= temp[i];
    }
    }
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long inv=0;
    vector<long long> temp(n);
    merge(arr, temp, 0, n, inv);
return inv;
}