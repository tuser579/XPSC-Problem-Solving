#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin>>n>>m;
    map<string,string> mp;
    while(n--)
    {
       string a,b;
       cin>>a>>b;
       mp[b]=a;
    }
    while(m--)
    {
       string c,d;
       cin>>c>>d; 
       d.pop_back();
       cout<<c<<" "<<d<<"; #"<<mp[d]<<"\n";
    }
    return 0;
}