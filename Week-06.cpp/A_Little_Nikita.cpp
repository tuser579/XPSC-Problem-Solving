
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
        ll n, m;
        cin >> n >> m;
        if(n >= m && (n%2) == (m%2))  cout<<"Yes\n";
        else  cout<<"No\n";
    }
    return 0;
}