#include<bits/stdc++.h>
using namespace std;
int main()
{
    //if there are more there 1 odd char, NO SOLUTION
    //else, keep the odd char in center (in case of 1 odd), and even char around it symmetrically 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0;i<s.length();++i)
    {
        m[s[i]]++;
    }
    int odd=0;
    for(auto it=m.begin();it!=m.end();++it)
    {
        if((it->second)&1) odd++;
    }
    if(odd>1) cout<<"NO SOLUTION";
    else 
    {
        string f="\0",b="\0";
        string sep="\0";
        for(auto it=m.begin();it!=m.end();++it)
        {
            if((it->second)&1)
            {
                (it->second)--;
                sep=it->first;
            }
            for(int j=0;2*j<it->second;++j)
            {
                f.push_back(it->first);
                b.push_back(it->first);
            }
        }
        f=f+sep;
        reverse(b.begin(),b.end());
        string ans=f+b;
        cout<<ans;
    }
}