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
        ll n,x,k;
        cin>>n>>x>>k;
        string s;
        cin>>s;
        ll zero = 0;
        ll inv = 0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='1')    zero++;
            else    inv += zero;
        }
        if(inv>=0 && inv<=x && inv%k==0)   cout<<1<<"\n";
        else    cout<<2<<"\n";
    }
    return 0;
}