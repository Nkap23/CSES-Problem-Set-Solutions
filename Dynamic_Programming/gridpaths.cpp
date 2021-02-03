#include<bits/stdc++.h>
using namespace std;

const long long mod=pow(10,9)+7;

int main()
{
    // basic dp, arr[i][j]=arr[i-1][j]+arr[i][j-1]
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    char inp[n][n];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            cin>>inp[i][j];
        }
    }
    long long arr[n][n];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(inp[i][j]=='*') arr[i][j]=0;
            else 
            {
                if(i==0 and j==0) arr[i][j]=1;
                else if(i==0) arr[i][j]=arr[i][j-1];
                else if(j==0) arr[i][j]=arr[i-1][j];
                else arr[i][j]=(arr[i-1][j]+arr[i][j-1])%mod;
            }
        }
    }
    cout<<arr[n-1][n-1];
}