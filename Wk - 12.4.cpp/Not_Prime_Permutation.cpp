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
        ll even, odd;
        if(n%2==0)
        {
            even = n; odd = n-1;
        }
        else
        {
            even = n-1; odd = n;
        }
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x==3 && n!=1 && n!=2)   cout<<"1 ";
            else if(x==1 && n!=1 && n!=2)   cout<<"3 ";
            else if(x%2==0 && n!=1 && n!=2)
            {
                cout<<even<<" ";
                even-=2;
            }
            else if(x%2==1 && n!=1 && n!=2)
            {
                cout<<odd<<" ";
                odd-=2;
            }
        }
        if(n==1 || n==2)   cout<<"-1";
        cout<<"\n";
    }    
    return 0;
}