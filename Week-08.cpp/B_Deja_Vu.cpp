#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    while(n--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<ll> v;
        for(ll j=0;j<q;j++)
        {
            ll x;
            cin>>x;
            if(v.size()==0 || v.back()>x)
            {
                v.push_back(x);
            }
        }
        for(ll i=0;i<n;i++)
        {
            for(auto it : v)
            {
                if(a[i]%(1LL << it)==0)  a[i]+=(1LL << (it-1));
            }
        }
        for(auto it : a)
        {
            cout<<it<<" ";
        }
        cout<<"\n";
    }    
    return 0;
}            
