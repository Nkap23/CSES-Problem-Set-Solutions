#include<bits/stdc++.h>
using namespace std;
int main()
{
    //simple priority queue
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> arrival;
    priority_queue<int,vector<int>,greater<int>> depart;
    for(int i=0;i<n;++i)
    {
        int start,end;
        cin>>start>>end;
        arrival.push(start);
        depart.push(end);
    }
    int count=0;
    int ans=0;
    while(!arrival.empty() && !depart.empty())
    {
        if(arrival.empty() && depart.empty()) break;
        else if(arrival.empty() && depart.empty())
        {
            count--;
            depart.pop();
        }
        else if(!arrival.empty() && depart.empty())
        {
            count++;
            arrival.pop();
        }
        else 
        {
            if(depart.top()==arrival.top())
            {
                depart.pop();
                arrival.pop();
            }
            else if(depart.top()<arrival.top())
            {
                count--;
                depart.pop();
            }
            else 
            {
                count++;
                arrival.pop();
            }
        }
        ans=max(ans,count);
    }
    cout<<ans;
}