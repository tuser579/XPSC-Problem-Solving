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
        map<ll,ll> mp;
        for(ll i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            mp[x]++;
        }
        priority_queue<ll> pq;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            pq.push(it->second);   
        }
        while(!pq.empty())
        {
            if(pq.size()<2)  break;
            ll x=pq.top();pq.pop();
            ll y=pq.top();pq.pop();
            x--;y--;
            if(x>=1)  pq.push(x);
            if(y>=1)  pq.push(y);
        }
        ll ans=0;
        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }
        cout<<ans<<"\n";
    }    
    return 0;
}
