#include<bits/stdc++.h>
using namespace std;
int main()
{
    //using property of xor, xor of range [a,b] = xor(0,b)^xor(0,a-1)
    //similar to prefix sums
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin>>n>>q;
    long long arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;++i)
    {
        arr[i]=arr[i]^arr[i-1];
    }
    for(int i=0;i<q;++i)
    {
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        if(x==0) cout<<arr[y];
        else cout<<(arr[y]^arr[x-1]);
        cout<<"\n";
    }
}