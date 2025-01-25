#include <bits/stdc++.h>
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
        ll n;
        cin>>n;
        vector<ll> v(n);
        unordered_map<ll,ll> mp;
        unordered_map<ll,ll> pp;
        for(ll i=0;i<n;i++)   
        {
            cin>>v[i];mp[v[i]] = i;
        }
        ll answer = 0;
        for(ll i=0;i<n;i++)
        {
            ll lt = mp[v[i]];
            while(i<n && i<lt)
            {
                lt = max(lt,mp[v[i]]);
                if(pp[v[i]]==0)  
                {
                    answer++;
                    pp[v[i]] = 1;
                }
                i++;
            }
        }
        cout<<answer<<"\n";
    }    
    return 0;
}