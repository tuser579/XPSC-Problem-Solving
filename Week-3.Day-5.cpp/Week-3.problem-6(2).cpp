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
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        map<ll,ll> mp;
        for(ll i=v.size()-1;i>=0;i--)
        {
            mp[v[i]]++;
            if(mp[v[i]]==2)   break;
        }
        cout<<n-mp.size()<<"\n";
    }
    return 0;
}
