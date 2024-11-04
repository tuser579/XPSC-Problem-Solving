#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,t;
    cin>>n>>t;
    set<ll> s;
    vector<ll> v;
    vector<ll> ans;
    while(n--)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    for(ll i=0;i<v.size();i++)
    {
        s.insert(v[v.size()-i-1]);
        ans.push_back(s.size());
    }
    for(ll i=0;i<t;i++)
    {
        ll l;
        cin>>l;
        cout<<ans[ans.size()-l]<<"\n";
    }
    return 0;
}

