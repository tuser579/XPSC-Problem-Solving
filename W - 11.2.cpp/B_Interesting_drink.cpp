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
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll q;
    cin>>q;
    while(q--)
    {
        ll x;
        cin>>x;
        if(x<v[0])   cout<<0<<"\n";
        else if(x>v.back())    cout<<n<<"\n";
        else
        {
            ll l=0,r=n-1,ans;
            while (l <= r) 
            {
                ll mid = l + (r - l) / 2;
                if (x >= v[mid]) 
                {
                    ans = mid;
                    l = mid + 1;
                }
                else 
                {
                    r = mid - 1;
                }
            }
            cout<<ans+1<<"\n";
        }
    }
    return 0;
}
