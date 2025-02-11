#include <bits/stdc++.h>
using namespace std;
using ll = long long int; 
 
int main() 
{    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
 
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n+1);
        for(ll i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll cnt = 0;
        if(n%2==0) 
        {  
            for(ll i=n/2;i<=n;i++)
            {
                if(v[n/2]==v[i])   cnt++;
                else   break;
            }
        }    
        else
        {
            for(ll i=(n/2)+1;i<=n;i++)
            {
                if(v[(n/2)+1]==v[i])   cnt++;
                else  break;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}