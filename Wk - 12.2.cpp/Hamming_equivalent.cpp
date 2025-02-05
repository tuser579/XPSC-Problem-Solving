#include <bits/stdc++.h>
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
        bool fg = true; 
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(ll i=0;i<n;i++)
        {
            if(v[i] != i+1)
            {
                ll x = __builtin_popcount(v[i]);
                ll y = __builtin_popcount(i+1);
                if(x != y)
                {
                    fg = false;
                    break;
                }
            }
        }
        if(fg)   cout<<"Yes\n";
        else  cout<<"No\n";
    }
	return 0;
}
