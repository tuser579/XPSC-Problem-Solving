#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int mod = 1e9+7;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll x;
    cin>>x;
    ll a,b;
    for(ll i=1;i*i<=x;i++)
    {
        if(x%i)  continue;
        ll aa=i;ll bb=x/i;
        if(__gcd(aa,bb)==1)
        {
            a=aa;b=bb;
        }
    }
    cout<<a<<" "<<b<<"\n";
    return 0;
}