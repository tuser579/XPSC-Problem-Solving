#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,a,b,p,q;
    cin >> n >> a >> b >> p >> q;
    ll lcm=(a/__gcd(a,b))*b;
    ll x = (n / a) * p, y = (n / b) * q, lp = (n / lcm);
    cout<<((x + y) - (lp * (p + q))) + (lp * max(p, q))<<"\n";
    return 0;
}