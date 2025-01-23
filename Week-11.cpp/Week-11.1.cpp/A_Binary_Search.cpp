#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;
    map<ll,ll> mp;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        mp[x]++;
    }
    while(k--)
    {
        ll f;
        cin>>f;
        if(mp[f]>=1)   cout<<"YES\n";
        else   cout<<"NO\n";
    }
    return 0;
}