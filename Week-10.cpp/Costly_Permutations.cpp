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
        ll n;
        cin>>n;
        vector<ll> v(n);
        vector<int> vis(n,0);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        priority_queue<int,vector<int>,greater<int>>k;
        for(ll i=0;i<n;i++)
        {
            if(!vis[i])
            {
                ll sz=0;ll j=i;
                while(!vis[j])
                {
                    vis[j]=1;
                    sz++;
                    j=v[j];
                }
                k.push_bak(sz);
            }
        }
        ll ans = 0;
        while (k.size() > 1)
        {
            ll mx = k.top();
            k.pop();
            ll mx1 = k.top();
            k.pop();
            ans += mx + mx1;
            k.push(mx + mx1);
        }
        cout << ans << "\n";
    }
    return 0;
}