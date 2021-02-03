#include<bits/stdc++.h>
using namespace std;
int main()
{
    //basic DP, arr[x]=min(arr[x],arr[x-coins[i]]+1);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,s;
    cin>>n>>s;
    int coins[n];
    for(int i=0;i<n;++i)
    {
        cin>>coins[i];
    }
    long long arr[s+1];
    for(int i=0;i<=s;++i)
    {
        arr[i]=INT_MAX;
    }
    arr[0]=0;
    for(int i=1;i<=s;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(i-coins[j]>=0) arr[i]=min(arr[i],arr[i-coins[j]]+1);
        }
    }
    if(arr[s]==INT_MAX) cout<<-1;
    else cout<<arr[s];
}