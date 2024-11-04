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
        string s,t;
        for(ll j=1;j<=n;j++)
        {
            char c;
            cin>>c;
            if(c=='G')   c='B';
            s.push_back(c);
        }
        for(ll j=1;j<=n;j++)
        {
            char c;
            cin>>c;
            if(c=='G')   c='B';
            t.push_back(c);
        }
        if(s==t)   cout<<"YES\n";
        else  cout<<"NO\n";
    }
    return 0;
}    