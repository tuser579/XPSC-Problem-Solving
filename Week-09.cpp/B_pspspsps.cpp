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
        if(s[0]=='s')   s[0]='.';
        if(s.back()=='p')   s.back()='.';
        ll fgs=0,fgp=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='s')  fgs++;
            if(s[i]=='p')  fgp++;
        }
        if(fgs && fgp)  cout<<"NO\n";
        else  cout<<"YES\n";
    }
    return 0;
}