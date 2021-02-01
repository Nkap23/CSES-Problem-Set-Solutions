#include<bits/stdc++.h>
using namespace std;
int main()
{
    //keep a simple counter and keep checking the current element wihh previous element
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int count=1;
    int ans=count;
    char prev=s[0];
    for(int i=1;i<s.length();++i)
    {
        if(s[i]==prev)
        {
            count++;
            ans=max(ans,count);
        }
        else 
        {
            prev=s[i];
            count=1;
        }
    }
    cout<<ans;
}