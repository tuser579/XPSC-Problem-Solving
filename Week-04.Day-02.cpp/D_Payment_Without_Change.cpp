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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a*c+b)>=d)
        {
            if((a*c+b)==d)  cout<<"YES\n";
            else
            {
                ll x=d%c;
                if(x<=b)  cout<<"YES\n";
                else  cout<<"NO\n";
            }
        }
        else  cout<<"NO\n";
    }
    return 0;
}

