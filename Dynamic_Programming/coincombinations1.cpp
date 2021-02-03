#include<bits/stdc++.h>
using namespace std;

const long long mod=pow(10,9)+7;

int main()
{
    //basic dp, for any value x, arr[x]=arr[x]+arr[x-coins[j]]
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,s;
    cin>>n>>s;
    long long coins[n];
    for(int i=0;i<n;++i)
    {
        cin>>coins[i];
    }
    long long arr[s+1]={0};
    arr[0]=1;
    for(int i=1;i<=s;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(i-coins[j]>=0) arr[i]=(arr[i]+arr[i-coins[j]])%mod;
        }
    }
    cout<<arr[s];
}