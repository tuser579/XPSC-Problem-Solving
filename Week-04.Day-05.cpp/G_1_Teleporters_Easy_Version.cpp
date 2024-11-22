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
        ll n,k;
        cin>>n>>k;
        priority_queue<ll,vector<ll>,greater<ll>> p;
        for(ll i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            p.push(x+i);
        }
        ll cnt=0;
        for(ll i=1;i<=n;i++)
        {
            if(k>=p.top())
            {
                cnt++;
                k-=p.top();
                p.pop();
            }
            else  break;
        }    
        cout<<cnt<<"\n";
    }
    return 0;
}

