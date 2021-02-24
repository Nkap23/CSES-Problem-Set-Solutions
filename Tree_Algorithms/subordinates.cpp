#include<bits/stdc++.h>
using namespace std;
vector<int> ans(2*1000*100);
map<int,vector<int>> child;
int csum(int curr)
{
    if(child.find(curr)==child.end())
    {
        ans[curr]=0;
        return 0;
    }
    else 
    {
        int count=child[curr].size();
        for(int i=0;i<child[curr].size();++i)
        {
            count=count+csum(child[curr][i]);
        }
        ans[curr]=count;
        return count;
    }
}
int main()
{
    //simple recursion, start from root... subordinate[currele]=direct subordinates+subordinate[directsubordinates]
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    for(int i=0;i<n-1;++i)
    {
        int x;
        cin>>x;
        child[x].push_back(i+2);
    }
    csum(1);
    for(int i=1;i<=n;++i)
    {
        cout<<ans[i]<<" ";
    }
}