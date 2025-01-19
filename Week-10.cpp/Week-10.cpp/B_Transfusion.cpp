#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll so=0,se=0;
        for(ll i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            if(i&1)   so+=x;
            else   se+=x;
        }
        ll e = n/2 , o = n - (n/2);
        if((so%o) != 0 || (se%e) != 0)   cout<<"NO\n";
        else if((so/o) == (se/e))   cout<<"YES\n";
        else   cout<<"NO\n";
    }
    return 0;
}