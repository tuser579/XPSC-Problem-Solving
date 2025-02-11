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
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        ll cnt = 0;
        for(ll i=0;i<n-2;i++)
        {
            cnt += (v[i]+v[i+1]);
        }  
        cnt+=v[0]+v[n-1];  
        cout<<cnt<<"\n";
    }
    return 0;
}