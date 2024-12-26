#include<bits/stdc++.h>
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
        ll a[n+1];
        for(ll i=1;i<=n;i++)   cin>>a[i];
        sort(a+1,a+n+1,greater<ll>());
        cout<<a[(n+1)/2]<<"\n";
    }
    return 0;
}