#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int mod = 1e9+7;

ll calfb(ll a1, ll a2, ll a3, ll a4, ll a5) 
{
    ll fib = 0;
    if (a3 == a1 + a2) 
    {
        fib++;
    }
    if (a4 == a2 + a3) 
    {
        fib++;
    }
    if (a5 == a3 + a4) 
    {
        fib++;
    }
    return fib;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while (t--) 
    {
        ll a1, a2, a3, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        ll mxfb = 0;
        a3 = a1 + a2;
        mxfb = max(mxfb, calfb(a1, a2, a3, a4, a5));
        a3 = a4 - a2;
        mxfb = max(mxfb, calfb(a1, a2, a3, a4, a5));
        a3 = a5 - a4;
        mxfb = max(mxfb, calfb(a1, a2, a3, a4, a5));
        cout << mxfb << "\n";
    }
    return 0;
}
