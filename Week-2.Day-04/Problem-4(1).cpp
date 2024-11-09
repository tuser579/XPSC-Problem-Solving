#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        map<ll,vector<ll>> v;
        for(ll i=1;i<=n;i++)
        {
            ll  x;
            cin>>x;
            v[x].push_back(i); 
        }
        while(m--)
        {
            ll a,b;
            cin>>a>>b;
            if(v[b].size()==0 || v[a].size()==0)   cout<<"NO\n";
            else
            {
                ll s=v[b].back();
                ll f=v[a].front();
                if(s>=f)   cout<<"YES\n";
                else   cout<<"NO\n";
            }
        }
    }
    return 0;
}
