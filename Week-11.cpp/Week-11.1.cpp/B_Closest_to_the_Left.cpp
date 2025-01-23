#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,q;
    cin>>n>>q;
    vector<ll> v(n);
    map<ll,ll> mp;
    map<ll,ll> pm;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]]=i+1;
        pm[v[i]]++;
    }
    while(q--)
    {
        ll x;
        cin>>x;
        if(x<v[0])   cout<<0<<"\n";
        else if(x>v[n-1])   cout<<n<<"\n";
        else if(pm[x]>=1)   cout<<mp[x]<<"\n";
        else
        {
            ll l = 0,r = n-1;
            while(l<=r)
            {
                ll mid = (l+r)/2;
                if(v[mid]==x)
                {
                    cout<<mid+1<<"\n";break;
                }
                else if(x > v[mid] && x < v[mid+1])
                {
                    cout<<mid+1<<"\n";break;
                }
                else if(x < v[mid] && x > v[mid-1])
                {
                    cout<<mid<<"\n";break;
                }
                else if(x>v[mid])
                {
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
        }
    }
    return 0;
}
