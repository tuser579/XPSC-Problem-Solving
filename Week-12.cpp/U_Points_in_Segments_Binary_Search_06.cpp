#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    for(ll j=1;j<=t;j++)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)   cin>>v[i];
        cout<<"Case "<<j<<":\n";
        while(q--)
        {
            ll a,b;
            cin>>a>>b;
            if(a<v[0] && b<v[0])
            {
                cout<<"0\n";
                continue;
            }
            if(a>v[n-1] && b>v[n-1])
            {
                cout<<"0\n";
                continue;
            }
            ll l=0,r=n-1,ansl;
            if(a<v[0])  ansl = 0;
            else
            {
                while (l <= r) 
                {
                    ll mid = (l + r) / 2;
                    if(a <= v[mid]) 
                    {
                        ansl = mid;
                        r = mid - 1;
                    }
                    else 
                    {
                        l = mid + 1;
                    }
                }
            }
            l=0;r=n-1;ll ansr;
            if(b>v[n-1])   ansr = n-1;
            else
            {
                while (l <= r) 
                {
                    ll mid = (l + r) / 2;
                    if(b >= v[mid]) 
                    {
                        ansr = mid;
                        l = mid + 1;
                    }
                    else 
                    {
                        r = mid - 1;
                    }
                }
            }
            cout<<ansr-ansl+1<<"\n";
        }
    }
    return 0;
}