#include<bits/stdc++.h>
using namespace std;
int main()
{
    //simple binary search
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,x;
    cin>>n>>x;
    long long arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;++i)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;++i)
    {
        arr[i]=arr[i]+arr[i-1];
    }
    int count=0;
    for(int i=1;i<=n;++i)
    {
        if(arr[i]<x) continue;
        else 
        {
            long long extra=arr[i]-x;
            if(binary_search(arr,arr+n,extra)) count++;
        }
    }
    cout<<count;
}