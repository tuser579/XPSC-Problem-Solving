
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
    vector<ll> even;
    vector<ll> odd;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]%2==0)   even.push_back(v[i]);
        else   odd.push_back(v[i]);
    }
    sort(even.rbegin(),even.rend());
    sort(odd.rbegin(),odd.rend());
    ll e = even.size();
    ll o = odd.size();
    if(e==o || abs(e-o)==1)   cout<<"0\n";
    else
    {
        ll mn = 0;
        if(e>o)
        {
            for(ll i=o+1;i<e;i++)
            {
                mn+=even[i];
            }
        }
        else
        {
            for(ll i=e+1;i<o;i++)
            {
                mn+=odd[i];
            }
        }
        cout<<mn<<"\n";
    }
    return 0;
}
