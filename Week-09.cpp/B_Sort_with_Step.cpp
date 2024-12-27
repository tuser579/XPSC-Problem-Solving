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
        ll n,k;
        cin>>n>>k;
        ll ans=0;
        for(ll i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            if(abs(x-i)%k!=0)  ans++;
        }
        if(ans==0)   cout<<ans;
        else if(ans==2)  cout<<1;
        else   cout<<-1;
        cout<<"\n";
    }
    return 0;
}