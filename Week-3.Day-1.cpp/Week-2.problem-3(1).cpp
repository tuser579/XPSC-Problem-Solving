#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    vector<ll> v;
    set<pair<ll,ll>> s;
    multiset<pair<ll,ll>> ms;
    ll cii=1;
    for(ll i=1;i<=t;i++)
    {
        ll tp;
        cin>>tp;
        if(tp==1)
        {
            ll mny;
            cin>>mny;
            s.insert({cii,mny});
            ms.insert({mny,-cii});
            cii++;
        }
        else if(tp==2)
        {
            ll ps=s.begin()->first,mny=s.begin()->second;
            v.push_back(ps);
            auto it=s.begin();
            s.erase(it);
            ms.erase({mny,-ps});
        }
        else
        {
            ll ps=-ms.rbegin()->second,mny=ms.rbegin()->first;
            v.push_back(ps);
            s.erase({ps,mny});
            ms.erase(--ms.end());
        }
    }
    for(ll i=0;i<v.size();i++)
    {
        cout<<v[i];
        if(i<v.size()-1)   cout<<" ";
    }
    return 0;
}
