#include<bits/stdc++.h>
using namespace std;

long long si=(1000*1000);
long long arr[(1000*1000)+1];

int main()
{
    //similar approach to sieve of eratosthenes
    //time complexity O(n*Hn) [Harmonic series], approx O(n*log(n))
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    for(long long i=1;i<=si;++i)
    {
        for(long long j=i;j<=si;j=j+i)
        {
            if(j%i==0) arr[j]++;
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<arr[n]<<"\n";
    }
}
