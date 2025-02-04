#include <bits/stdc++.h>
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
        string s;
        cin>>s;
        ll n = s.size(); 
        ll s1 = 0 , ss1 = 0;
        for(ll i=0;i<s.size();i++)
        {
            if(i==n-1 && s[n-1]=='1')
            {
                ss1++;
            }
            else if(s[i]=='1')   ++s1;
            else if(s[i]=='0' && s1>0)
            {
                ss1++;s1=0;
            }
        }
        if(ss1 == 1)    cout<<"YES\n";
        else if(ss1 > 1)   cout<<"NO\n";
        else   cout<<"NO\n";
    }
    return 0;
}