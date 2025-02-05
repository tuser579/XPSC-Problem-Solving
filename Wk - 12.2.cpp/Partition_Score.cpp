#include <bits/stdc++.h>
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
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(k==n)
        {
            cout<<(v[0]+v[n-1])<<"\n";
        }
        else if(n<5 || k==1)
        {
            sort(v.begin(),v.end());
            ll f = n-k;
            cout<<((v[0]+v[n-1])+(v[f]+v[f-1]))<<"\n";
        }
        else
        {
            sort(v.begin(),v.end());
            ll f = n - k -1;
            cout<<((v[0]+v[n-1])+(v[n-2]+v[f]))<<"\n";
        }
    }
	return 0;
}
