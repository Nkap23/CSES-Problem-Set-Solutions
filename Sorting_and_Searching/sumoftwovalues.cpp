#include<bits/stdc++.h>
using namespace std;

struct val{
    long long value;
    long long id;
}arr[1000*1000];

bool compare(val a,val b)
{
    return a.value<b.value;
}

int main()
{
    //structure (can be done using pair also) and binary search
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,s;
    cin>>n>>s;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i].value;
        arr[i].id=i+1;
    }
    sort(arr,arr+n,compare);
    bool flag=0;
    for(int i=0;i<n;++i)
    {
        long long extra=s-arr[i].value;
        long long left=0;
        long long right=n;
        while(right>=left)
        {
            long long mid=left+(right-left)/2;
            if(arr[mid].value==extra)
            {
                long long pos1=arr[i].id;
                long long pos2=arr[mid].id;
                if(pos1==pos2) break;
                else
                {
                    flag=1;
                    cout<<pos1<<" "<<pos2;
                    break;
                } 
            }
            else if(arr[mid].value>extra) right=mid-1;
            else left=mid+1;
        }
        if(flag) break;
    }
    if(!flag) cout<<"IMPOSSIBLE";
}