
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) 
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        ll mn = INT_MAX;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            mn = min(mn,v[i]);
        }
        bool fg = true;
        vector<ll> a;
        ll mntwo = INT_MAX;
        for(ll i=0;i<n;i++)
        {
            if(v[i]%mn!=0)
            {
                fg = false;
                a.push_back(v[i]);
                mntwo = min(mntwo,v[i]);
            }
        }
        if(fg)  cout<<"Yes\n";
        else
        {
            ll sz = a.size();fg = true;
            for(ll i=0;i<sz;i++)
            {
                if(a[i]%mntwo != 0)
                {
                    fg = false;
                    break;
                }
            }
            if(fg)   cout<<"Yes\n";
            else   cout<<"No\n";
        }
    } 
    return 0;
}
