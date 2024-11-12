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
            if(x!=0) mp[x]++;
        }
        if(mp.size()==0 || mp.size()==1)   cout<<"YES\n";
        else   cout<<"NO\n";
    }
    return 0;
}
