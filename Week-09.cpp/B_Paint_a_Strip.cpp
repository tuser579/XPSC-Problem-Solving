#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--) 
    {
        ll n;
        cin >> n;
        for (ll ans = 1, cur = 1; ; ans++, cur = cur * 2 + 2) 
        {
            if (cur >= n) 
            {
                cout << ans << '\n';
                break;
            }
        }
    }
    return 0;
}

   