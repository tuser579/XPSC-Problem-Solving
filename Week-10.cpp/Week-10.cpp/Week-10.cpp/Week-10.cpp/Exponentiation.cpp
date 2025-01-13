#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int mod = 1e9+7;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin>>n;
    while(n--)
    {
        ll x,n;
        cin>>x>>n;
        ll ans = 1 % mod;
        while(n)
        {
            if(n&1)
            {
                ans = (1LL * ans%mod * x%mod)%mod;
            }
            x = 1LL * x * x %mod;
            n >>= 1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}