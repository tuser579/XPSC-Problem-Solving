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
        ll n;
        cin>>n;
        ll a[n][n-1];
        map<ll,ll> mp;
        ll x;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n-1;j++)
            {
                cin>>a[i][j];
                if(j==0)
                {
                    mp[a[i][j]]++;
                    if(mp[a[i][j]]>=2) x=a[i][0];
                } 
            }
        }
        cout<<x<<" ";
        ll m;
        for(ll i=0;i<n;i++)
        {
            if(a[i][0]!=x)  
            {
                m=i;
                break;
            }    
        }
        for(ll i=0;i<n-1;i++)  cout<<a[m][i]<<" ";
        cout<<"\n";
    }
    return 0;
}
