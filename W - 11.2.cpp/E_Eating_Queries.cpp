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
    ll n,q;
    cin>>n>>q;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    for(ll i=1;i<n;i++)
    {
        v[i]=v[i]+v[i-1];
    }
    while(q--)
    {
        ll x;
        cin>>x;
        if(x<=v[0])   cout<<1<<"\n";
        else if(x>v.back())    cout<<-1<<"\n";
        else
        {
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
    }
    }
    return 0;
}
