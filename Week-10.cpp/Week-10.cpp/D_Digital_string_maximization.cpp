#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int mod = 1e9+7;

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
        string ans;
        ll n = s.size();
        for(ll i=0;i<n;i++)
        {
            ll cur = s[i] - 48;
            ll posss = i;
            for(ll j=i;j<min((10LL+i),n);j++)
            {
                ll prt = s[j] - 48;
                if(prt - (j - i) > cur)
                {
                    posss = j;
                    cur = prt - (j - i);
                }
            }
            while(posss > i)
            {
                swap(s[posss],s[posss-1]);
                posss--;
            }
            ans.push_back(char(cur+48));
        }
        cout<<ans<<"\n";
    }
    return 0;
}