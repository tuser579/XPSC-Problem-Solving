#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,t;
    cin>>s>>t;
    ll cnt=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]!=t[i])   cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}

