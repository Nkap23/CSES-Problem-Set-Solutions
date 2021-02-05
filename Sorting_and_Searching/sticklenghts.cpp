#include<bits/stdc++.h>
using namespace std;
int main()
{
    //median of the array
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long ele=arr[n/2];
    long long ans=0;
    for(int i=0;i<n;++i)
    {
        ans=ans+abs(ele-arr[i]);
    }
    cout<<ans;
}