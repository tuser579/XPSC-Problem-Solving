#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    ll oddsum=0,evensum=0,odd=0,even=0,fstodd=INT_MAX;
    for(ll i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x%2==1)
        {
            ++odd;
            oddsum+=x;
            if(x%2==1 && x<fstodd)
            {
                fstodd=x;
            }
        }
        else
        {
            ++even;
            evensum+=x;
        }
    }
    if(odd%2==1)
    {
        oddsum=oddsum-fstodd;
        cout<<oddsum+evensum<<"\n";
    }
    else
    {
        cout<<evensum+oddsum<<"\n";
    }
    return 0;
}