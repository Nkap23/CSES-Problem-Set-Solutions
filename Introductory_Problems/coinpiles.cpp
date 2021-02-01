#include<bits/stdc++.h>
using namespace std;
int main()
{
    //a+b should be divisible by 3 
    //keep in various cases: when coins in a pile are zero, when coins in a pile are more than 2x of the other pile etc. 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(a==0 and b==0) cout<<"YES";
        else if(a==0 and b!=0) cout<<"NO";
        else if(b==0 and a!=0) cout<<"NO";
        else if(b>2*a or a>2*b) cout<<"NO";
        else if((a+b)%3) cout<<"NO";
        else cout<<"YES";
        cout<<"\n";
    }
}