#include<bits/stdc++.h>
using namespace std;
int main()
{
    //find sum of first n number using formuala, find the sum of input array, ans=formuala_sum-array_sum
    long long n;
    cin>>n;
    long long inpsum=0;
    long long sum=(n*(n+1))>>1;
    for(int i=0;i<n-1;++i)
    {
        long long x;
        cin>>x;
        inpsum=inpsum+x;
    }
    cout<<sum-inpsum;
}