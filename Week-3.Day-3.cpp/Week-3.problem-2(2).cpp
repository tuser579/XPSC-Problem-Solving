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
        multiset<ll> ml;
        while(n--)
        {
            ll x;
            cin>>x;
            ml.insert(x);
        }
        auto it=ml.begin(),itt=--ml.end();
        ll f1=*it,e1=*itt;
        auto it2=++it,itt2=--itt;
        ll f2=*it2,e2=*itt2;
        auto it3=++it2,itt3=--itt2;
        ll f3=*it3,e3=*itt3;
        cout<<min({(e2-f2),(e1-f3),(e3-f1)})<<"\n";
    }
    return 0;
}
