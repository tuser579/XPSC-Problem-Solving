#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,q;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)   
    {
        cin>>v[i];
        if(i>=1)   v[i]=v[i]+v[i-1];
    }  
    cin>>q;
    while(q--)
    {
        ll x;
        cin>>x;
        ll l=0,r=n-1,ans;
        while (l <= r) 
        {
            ll mid = l + (r - l) / 2;
            if (x <= v[mid]) 
            {
                ans = mid;
                r = mid - 1;
            }
            else 
            {
                l = mid + 1;
            }
        }
        cout<<ans+1<<"\n";
    }  
    return 0;
}