
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
        ll n,m;
        cin>>n>>m;
        string s,f;
        cin>>s>>f;
        ll mx = INT_MAX;
        for(ll i=0;i<=(n-m);i++)
        {
            ll k = i;
            ll cnt = 0;
            for(ll j=0;j<m;j++)
            {
                if(s[k]!=f[j])   cnt++;
                k++;
            }
            mx = min(mx,cnt);
        }
        cout<<mx<<"\n";
    } 
    return 0;
}
