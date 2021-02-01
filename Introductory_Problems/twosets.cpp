#include<bits/stdc++.h>
using namespace std;
int main()
{
    //simple approch would be to keep last element in vec1, next two in vec2, next two in vec1 and so on
    //see the implementation below for better understanding
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    long long sum=(n*(n+1))>>1;
    if(sum&1) cout<<"NO";
    else
    {
        cout<<"YES";
        cout<<"\n";
        vector<long long> v1,v2;
        v1.push_back(n);
        n--;
        int count=0;
        bool flag=1;
        while(n>0)
        {
            if(flag) v2.push_back(n);
            else v1.push_back(n);
            n--;
            count++;
            if(count==2)
            {
                count=0;
                flag=flag^1;
            }
        }
        cout<<v1.size();
        cout<<"\n";
        for(int i=0;i<v1.size();++i)
        {
            cout<<v1[i]<<" ";
        }
        cout<<"\n";
        cout<<v2.size();
        cout<<"\n";
        for(int i=0;i<v2.size();++i)
        {
            cout<<v2[i]<<" ";
        }
    }
}