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
        ll a,b,c;
        cin>>a>>b>>c;
        vector<ll> va;
        vector<ll> vb;
        for(ll i=1;i<=a;i++)
        {
            ll x;
            cin>>x;
            va.push_back(x);
        }
        sort(va.rbegin(),va.rend());
        for(ll i=1;i<=b;i++)
        {
            ll x;
            cin>>x;
            vb.push_back(x);
        }
        sort(vb.rbegin(),vb.rend());
        ll mn=0;ll sum=0;
        if(va.size()>=vb.size())
        {
            mn=vb.size();
            for(ll j=0;j<mn;j++)
            {
                if(vb[j]*c <= va[j])   sum+=c*vb[j];
                else if(c*vb[j] > va[j])   sum+=va[j];
            }
        }
        else if(va.size() < vb.size())
        {
            mn=va.size();
            for(ll j=0;j<mn;j++)
            {
                if(vb[j]*c <= va[j])   sum+=c*vb[j];
                else if(c*vb[j] > va[j])   sum+=va[j];
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
