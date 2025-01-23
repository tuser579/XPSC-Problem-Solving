#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        ll sum = 0;
        ll cnt = 0;
        map<ll,ll> mp;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i]; sum += v[i]; mp[v[i]]++;
            if(sum==0)   cnt++;
            else if(sum % 2 == 0)
            {
                if(mp[(sum/2)]>=1)   cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
