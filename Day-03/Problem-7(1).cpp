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
    while(n--)
    {
       string s;
       cin>>s;
       ++mp[s];
       if(mp[s]==1)  cout<<"OK\n";
       else  cout<<s<<mp[s]-1<<'\n';
    }
    return 0;
}