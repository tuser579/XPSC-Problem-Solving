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
        string s;
        cin>>s;
        ll dot = 0;
        bool fg = false;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='.')   dot++;
            if(i>0 && i<n-1 && s[i-1]=='.' && s[i]=='.' && s[i+1]=='.')   fg = true;
        }
        if(fg)   cout<<"2\n";
        else   cout<<dot<<"\n";
    }    
    return 0;
}