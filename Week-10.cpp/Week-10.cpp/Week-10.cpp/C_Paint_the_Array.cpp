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
        ll n;
        cin>>n;
        vector<ll> a(n);
        ll g1=0,g2=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(i%2==0)   g1=__gcd(g1,a[i]);
            else   g2=__gcd(g2,a[i]);
        }
        bool flag=true;
        for(ll i=0;i<n;i+=2)
        {
            if(a[i]%g2==0)  flag=false;
        }
        if(flag)   cout<<g2<<"\n";
        else
        {
            flag=true;
            for(ll i=1;i<n;i+=2)
            {
                if(a[i]%g1==0)  flag=false;
            }
            if(flag)   cout<<g1<<"\n";
            else  cout<<"0\n";
        }
    }
    return 0;
}