#include<bits/stdc++.h>
using namespace std;

const long long mod=pow(10,9)+7;

int main()
{
    //basic DP, similar to fibonacci ... nth term=sum of last 6 terms
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    long long arr[n+7]={0};
    for(int i=1;i<=6;++i)
    {
        for(int j=0;j<i;++j)
        {
            arr[i]=arr[i]+arr[j];
        }
        arr[i]++;
    }
    for(int i=7;i<=n;++i)
    {
        arr[i]=(arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6])%mod;
    }
    cout<<arr[n];
}