#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() 
{
    ll t;
    cin >> t; 
    while (t--) 
    {
        ll n;
        cin >> n;  
        vector<int> a(n);
        ll s = -1;
        vector<ll> v;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) 
            {
                v.push_back(a[i]);
            } 
            else if (a[i] > s)
            {
                s = a[i];
            }
        }
        sort(v.begin(), v.end());
        if (s == -1 || v.empty()) 
        {
            cout << 0 << endl;
            continue;
        }
        ll ans = v.size();
        for (int t : v) 
        {
            if (t < s) 
            {
                s += t;
            } 
            else 
            {
                ans += 1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
