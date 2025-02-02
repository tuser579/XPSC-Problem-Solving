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
        set<ll> s;
        for(ll i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            s.insert(x);
        }
        if((n-s.size())%2==0)   cout<<s.size()<<"\n";
        else   cout<<s.size()-1<<"\n";
    }
    return 0;
}