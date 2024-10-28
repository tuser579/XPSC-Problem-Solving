#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    map<string,ll> mp;
    ll cnt=0;
    while(n--)
    {
        string a,b;
        cin>>a>>b;
        a=a+"TUSER";
        a+=b;
        if(mp[a]==0)  cnt++;
        ++mp[a];
    }
    cout<<cnt<<"\n";
    return 0;
}