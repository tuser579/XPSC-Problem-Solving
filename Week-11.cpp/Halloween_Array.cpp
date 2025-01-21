
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;  
    while (t--) 
    {
        int n, l, r;
        cin >> n >> l >> r;
        vector<ll> a(n);
        set<ll> s;
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        if(s.size() < n)
        {
            if(l==0)
            {
                cout<<"YES\n";
                continue;
            }
            cout<<"NO\n";
            continue;
        }
        ll pt = 1;
        bool fg = true;
        for (ll i = 0; i < n; i++) 
        {
            for (ll j = i + 1; j < n; j++) 
            {
                ll x = a[i] ^ a[j];
                pt *= x;
                if (pt > r) 
                {
                    fg = false;
                    break;
                }
            }
            if (!fg)   break;
        }
        if (fg && pt >= l && pt <= r) 
        {
            cout << "YES\n";
        } 
        else 
        {
            cout << "NO\n";
        }
    }
    return 0;
}
