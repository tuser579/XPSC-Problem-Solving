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
        ll ans=1;
        for(ll i=1;i<=n;i++)
        {
            ans = (1LL * ans%mod * i%mod) %mod;
        }
        cout<<ans<<"\n";
    }
    return 0;
}