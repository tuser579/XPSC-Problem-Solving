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
        map<ll,ll> mp;
        while(n--)
        {
            ll x;
            cin>>x;
            mp[x]++;
            cout<<char(96+mp[x]);
        }
        cout<<"\n";
    }
    return 0;
}

