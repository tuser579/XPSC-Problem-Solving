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
        ll n;
        cin>>n;
        if(n%2==0)   cout<<"-1\n";
        else 
        {
            ll a=1,b=n-1;
            for(ll i=1;i<=n;i++)
            {
                if(i%2==1)
                {
                    cout<<a<<" ";
                    a+=2;
                }
                else 
                {
                    cout<<b<<" ";
                    b-=2;
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}