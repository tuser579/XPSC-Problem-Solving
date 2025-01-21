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
                if(a==b)
                {
                    if(a%2==0)
                    {
                        cnt += (mp[a]/2);
                        mp[a] = 0; mp[b] = 0;
                    }
                    else
                    {
                        cnt += (mp[a]/2);
                        mp[a] = 1; mp[b] = 0;
                    }
                }
                else
                {
                    ll mn = min(mp[a],mp[b]);
                    cnt += mn;
                    mp[a] -= mn; mp[b]  -= mn;
                }
            }
            a++,b--;
            //cout<<a<<" v "<<b<<'\n';
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
