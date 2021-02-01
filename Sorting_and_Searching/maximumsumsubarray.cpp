#include<bits/stdc++.h>
using namespace std;
int main()
{
    //kadane algorithm
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    long long ans=arr[0];
    for(int i=1;i<n;++i)
    {
        arr[i]=max(arr[i]+arr[i-1],arr[i]);
        ans=max(ans,arr[i]);
    }
    cout<<ans;
}