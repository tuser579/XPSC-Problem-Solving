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
        ll n,k;
        cin>>n>>k;
        map<ll,ll> mp;
        for(ll i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            mp[x]++;
        }
        ll a=1,b=k-1;
        ll cnt=0;
        for(ll i=1;i<=(k/2);i++)
        {
            if(mp[a]>=1 && mp[b]>=1)
            {
                cnt++;
                mp[a]--;mp[b]--;
            }
            a++,b--;
            //cout<<a<<" v "<<b<<'\n';
        }
        cout<<cnt<<"\n";
    }
    return 0;
}