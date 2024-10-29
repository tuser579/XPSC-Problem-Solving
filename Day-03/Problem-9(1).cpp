#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    map<string,ll> mp;
    vector<string> v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        ++mp[v[i]];
    }
    for(ll i=n-1;i>=0;i--)
    {
        if(mp[v[i]]!=-1)
        {
            mp[v[i]]=-1;
            cout<<v[i]<<"\n";
        }        
    }
    return 0;
}