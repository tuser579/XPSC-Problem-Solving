#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int mod = 1e9+7;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        set<pair<ll,ll>> p;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                ll k;
                cin>>k;
                p.insert({k,i});
            }
        } 
        ll g = -999999;
        ll sz=0;
        map<ll,ll> mp;
        vector<ll> v;
        for(auto it = p.begin();it != p.end(); it++)
        {
            if(it->second != g)   
            {
                sz++;
                g=it->second;
            }  
            mp[it->second]++;
            if(mp[it->second]==1)   v.push_back(it->second);
        }
        if(n==1)   cout<<"1\n";
        else if(p.size()!=sz)   cout<<"-1\n";
        else
        {
            for(ll k=0;k<v.size();k++)   cout<<v[k]<<" ";
            cout<<"\n";
        }    
    }
    return 0;
}