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
        vector<ll> v(n);
        for(ll i=0;i<n;i++)   cin>>v[i];
        ll mx = INT_MIN;
        for(ll i=0;i<m;i++)
        {
            ll x;
            cin>>x;
            if(x>mx)   mx=x;
        }
        vector<ll> ans;
        for(ll i=n-1;i>=(n-mx);i--)
        {
            ans.push_back(v[i]);
        }
        sort(ans.begin(),ans.end());
        //for(ll i=0;i<ans.size();i++)   cout<<ans[i]<<" ";
        //cout<<"\n";
        ll st = 0;
        for(ll i=0;i<n;i++)
        {
            if(i<(n-mx))   cout<<v[i]<<" ";
            else   
            {
                cout<<ans[st]<<" ";
                st++; 
            }      
        }
        cout<<"\n";
    }    
    return 0;
}