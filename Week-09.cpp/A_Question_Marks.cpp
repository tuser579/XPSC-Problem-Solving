#include<bits/stdc++.h>
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
        string s;
        cin>>s;
        ll a=0,b=0,c=0,d=0;
        for(ll i=0;i<(4*n);i++)
        { 
            if(s[i]=='A')  a++;  
            else if(s[i]=='B')  b++;  
            else if(s[i]=='C')  c++;  
            else if(s[i]=='D')  d++;  
        }
        ll ans=0;
        if(a<=n)  ans+=a;
        else  ans+=n;
        if(b<=n)  ans+=b;
        else  ans+=n;
        if(c<=n)  ans+=c;
        else  ans+=n;
        if(d<=n)  ans+=d;
        else  ans+=n;
        cout<<ans<<"\n";
    }
    return 0;
}