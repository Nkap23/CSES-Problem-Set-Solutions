#include<bits/stdc++.h>
using namespace std;
int main()
{
    //if n<=3 no solution
    //else print all odd first, then print all even [in descending order]
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    if(n==1) cout<<1;
    else if(n<=3) cout<<"NO SOLUTION";
    else
    {
        if(n&1)
        {
            for(int i=n;i>0;i=i-2)
            {
                cout<<i<<" ";
            }
            for(int i=n-1;i>0;i=i-2)
            {
                cout<<i<<" ";
            }
        }
        else 
        {
            for(int i=n-1;i>0;i=i-2)
            {
                cout<<i<<" ";
            }
            for(int i=n;i>0;i=i-2)
            {
                cout<<i<<" ";
            }
        }
    }
    
}