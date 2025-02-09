
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;
    vector<ll> v(n);
    ll l = 0; 
    bool fg = true;
    ll mx = 0 , one = 0;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==1)
        {
            one++;
        }
        else
        {
            mx = max(mx,one);
            one = 0;
        }
        if(v[0]==1 && fg==true && v[i]==1)
        {
            l++;
        }
        else  
        {
            fg=false;
        }    
    }
    ll r = 0;fg = true;
    for(ll i=n-1;i>=0;i--)
    {
        if(v[n-1]==1 && fg==true && v[i]==1)
        {
            r++;
        }
        else   
        {
            fg=false;break;
        }    
    }
    cout<<max((l+r),mx);
    return 0;
}
