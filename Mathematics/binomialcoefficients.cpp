#include<bits/stdc++.h>
using namespace std;

vector<long long> fac((1000*1000)+1);
const long long sze=(1000*1000)+1;
const long long mod=pow(10,9)+7;

long long inverse(long long x)
{
    long long y=mod-2;
    long long ans=1;
    while(y>0)
    {
        if(y&1) ans=(ans*x)%mod;
        x=(x*x)%mod;
        y=y>>1;
    }
    return ans;
}

long long ncr(long long n,long long r)
{
    long long ans=fac[n]*inverse(fac[r])%mod*inverse(fac[n-r]%mod)%mod;
    return ans;
}

int main()
{
    //ncr%mod= fac[n]*modinverse(fac[r])%mod*modinverse(fac[n-r]%mod)%mod...mod inverse can be calculated using fermat's theorem
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i=0;i<sze;++i)
    {
        if(i==0) fac[i]=1;
        else fac[i]=(i*fac[i-1])%mod;
    }
    long long q;
    cin>>q;
    while(q--)
    {
        long long n,r;
        cin>>n>>r;
        cout<<ncr(n,r)<<"\n";
    }
}