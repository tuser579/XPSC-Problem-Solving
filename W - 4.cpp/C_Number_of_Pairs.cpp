#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,l,r;
        cin>>n>>l>>r;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)   cin>>v[i];
        sort(v.begin(),v.end());
        ll ans = 0;
        for(ll i=0;i<n;i++)
        {
            auto up = upper_bound(v.begin()+i+1,v.end(),r-v[i]);
            auto lb = lower_bound(v.begin()+i+1,v.end(),l-v[i]);
            ans += (up-lb);
        }
        cout<<ans<<"\n";
    }
    return 0;
}