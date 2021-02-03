#include<bits/stdc++.h>
using namespace std;
int main()
{
    //use multiset and greedy approach
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    multiset<int> s;
    int brr[m];
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    for(int i=0;i<m;++i)
    {
        cin>>brr[i];
    }
    for(int i=0;i<m;++i)
    {
        auto it=s.lower_bound(brr[i]);
        if(*it==brr[i])
        {
            cout<<*it;
            s.erase(it);
        }
        else 
        {
            if(it==s.begin()) cout<<-1;
            else
            {
                it--;
                if(*it<=brr[i])
                {
                    cout<<*it;
                    s.erase(it);
                }
                else cout<<-1;
            }
            
        }
        cout<<"\n";
    }
}