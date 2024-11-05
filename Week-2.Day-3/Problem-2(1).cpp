#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin>>n;
    multiset<ll> ms;
    for(ll i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        ms.insert(x);
    }
    ll cnt=0;
    for(ll i=1;i<=n;i++)
    {
        auto it=ms.lower_bound(i);  
        if(it!=ms.end())   
        {
            cnt++;
            ms.erase(it);
        }    
    }
    cout<<cnt<<"\n";
    return 0;
}
