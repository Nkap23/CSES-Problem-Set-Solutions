#include<bits/stdc++.h>
using namespace std;

const long long mod=pow(10,9)+7;
long long power(long long a,long long b)
{
    long long ans=1;
    while(b>0)
    {
        if(b&1) ans=(ans*a)%mod;
        a=(a*a)%mod;
        b=b>>1;
    }
    return ans;
}
int main()
{
    //modular exponentiation
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        long long a,b;
        cin>>a>>b;
        cout<<power(a,b);
        cout<<"\n";
    }
}