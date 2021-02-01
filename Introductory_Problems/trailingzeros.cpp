#include<bits/stdc++.h>
using namespace std;
int main()
{
    //number of trailing zeros =floor(n/5)+floor(n/25)+floor(n/625)...
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int ans=0;
    long long start=5;
    while(n/start>=1)
    {
        ans=ans+n/start;
        start=start*5;
    }
    cout<<ans;
}