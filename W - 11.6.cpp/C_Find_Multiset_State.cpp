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
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        ll sum = 0;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            if(i<=k-1)   sum+=v[i];
        }
        for(ll i=k;i<n;i++)
        {
            if(i==n-1)   v[i]+=sum;
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}