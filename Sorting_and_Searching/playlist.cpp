#include<bits/stdc++.h>
using namespace std;
int main()
{
    //two pointer
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    map<int,int> m;
    int frontp=1;
    int backp=1;
    int ans=0;
    for(int i=0;i<n;++i)
    {
        frontp++;
        if(m.find(arr[i])==m.end()) m[arr[i]]=i+1;
        else 
        {
            backp=max(backp,m[arr[i]]+1);
            m[arr[i]]=i+1;
        }
        ans=max(ans,frontp-backp);
    }
    cout<<ans;
}