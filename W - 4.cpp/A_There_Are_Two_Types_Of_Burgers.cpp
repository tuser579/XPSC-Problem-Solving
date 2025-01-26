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
        ll a,b,c;
        cin>>a>>b>>c;
        ll x,y;
        cin>>x>>y;
        ll bb = a/2;
        ll mx = 0;
        if(x>=y)
        {
            if(b>=bb)
            {
                mx=(bb*x);
            }    
            else if(b<bb)
            {
                bb=bb-b;
                mx=(b*x);
                if(c>=bb)
                {
                    mx+=(bb*y);
                }
                else
                {
                    mx+=(c*y);
                }
            }
        }
        else
        {
            if(c>=bb)
            {
                mx=(bb*y);
            }    
            else if(c<bb)
            {
                bb=bb-c;
                mx=(c*y);
                if(b>=bb)
                {
                    mx+=(bb*x);
                }
                else
                {
                    mx+=(b*x);
                }
            }
        }
        cout<<mx<<"\n";
    }
    return 0;
}