#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    vector<string> v;
    map<string,ll> mp;
    while(t--)
    {
        string s;
        cin>>s;
        v.push_back(s);
        mp[s]++;
    }
    for(ll i=v.size()-1;i>=0;i--)
    {
        if(mp[v[i]]>=1)
        {
            string s=v[i];
            cout<<s[s.size()-2]<<s[s.size()-1];
            mp[v[i]]=-1;
        }
    }
    return 0;
}
