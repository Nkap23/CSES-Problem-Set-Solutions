#include<bits/stdc++.h>
using namespace std;
int main()
{
    //if current element is smaller than previous, make current element=previous element
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    long long ans=0;
    for(int i=1;i<n;++i)
    {
        if(arr[i]>=arr[i-1]) continue;
        else
        {
            ans=ans+(arr[i-1]-arr[i]);
            arr[i]=arr[i-1];
        }
    }
    cout<<ans;
}