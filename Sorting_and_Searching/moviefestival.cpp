#include<bits/stdc++.h>
using namespace std;

struct movie
{
    int start;
    int end;
}arr[1000*1000];

bool compare(movie a, movie b)
{
    return a.end<b.end;
}

int main()
{
    //activity selection problem, sort according to end time
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i].start>>arr[i].end;
    }
    sort(arr,arr+n,compare);
    int count=0;
    int prev=0;
    for(int i=0;i<n;++i)
    {
        if(i==0)
        {
            count=1;
            prev=arr[i].end;
        }
        else 
        {
            if(arr[i].start>=prev)
            {
                count++;
                prev=arr[i].end;
            }
        }
    }
    cout<<count;
}