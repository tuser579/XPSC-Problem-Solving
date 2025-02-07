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
        ll n,a,b;
        cin>>n>>a>>b;
        ll cost = 0;
        if((a*2)>b)
        {
            if(n%2==0)   cost += (n/2)*b;
            else   cost += (((n/2)*b)+a);
        }
        else
        {
            cost += (a*n);
        }
        cout<<cost<<"\n";
    }    
    return 0;
}