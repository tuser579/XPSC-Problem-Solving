#include <bits/stdc++.h>
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
        ll n,x,y,d;
        cin>>n>>x>>y>>d;
        if((y-x) % d == 0)    cout<<abs(y-x)/d<<"\n";
        else
        {
            ll lw = 0;
            if(x==1)   lw=0;
            else if(x % d == 0)    lw+=(x/d);
            else  lw+=((x/d)+1);
            if((y-1) % d == 0)   lw+=(y/d);
            else  lw=-1;

            ll rw = 0;
            if(x==n)   rw=0;
            else if((n-x) % d == 0)    rw+=((n-x)/d);
            else  rw+=(((n-x)/d)+1);
            if((n-y) % d == 0)   rw+=((n-y)/d);
            else  rw=-1;

            if(lw!=-1 && rw!=-1)   cout<<min(lw,rw)<<"\n";
            else if(lw==-1 || rw==-1)    cout<<max(lw,rw)<<"\n";
        }
    }
    return 0;
}