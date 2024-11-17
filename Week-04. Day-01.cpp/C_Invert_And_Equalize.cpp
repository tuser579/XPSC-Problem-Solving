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
        ll c0=0,c1=0;
        ll fg0=false,fg1=false;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='0' && fg0==false)
            {
                c0++;
                fg0=true;
                fg1=false;
            }
            else if(s[i]=='1' && fg1==false)
            {
                c1++;
                fg1=true;
                fg0=false;
            }
        }
        cout<<min(c0,c1)<<"\n";
    }
    return 0;
}
