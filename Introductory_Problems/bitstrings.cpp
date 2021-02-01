#include<bits/stdc++.h>
using namespace std;

const long long mod=pow(10,9)+7;

long long power(long long b)
{
    long long a=2;
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
    // number of bit strings=(2**n)
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    cout<<power(n);
}