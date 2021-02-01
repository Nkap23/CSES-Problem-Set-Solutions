#include<bits/stdc++.h>
using namespace std;
int main()
{
    //number of unique permutations
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string> v;
    do 
    {
        v.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    cout<<v.size();
    cout<<"\n";
    for(int i=0;i<v.size();++i)
    {
        cout<<v[i];
        cout<<"\n";
    }
}