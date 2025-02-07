#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        map<ll,ll> mp;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];mp[v[i]]++;
        }
        ll mx = 0;
        for(ll i=0;i<n;i++)
        {
            if(mp[v[i]]>=3)
            {
                mx += ((mp[v[i]])/3); mp[v[i]]=0;
            }
        }
        cout<<mx<<"\n";
    }    
    return 0;
}