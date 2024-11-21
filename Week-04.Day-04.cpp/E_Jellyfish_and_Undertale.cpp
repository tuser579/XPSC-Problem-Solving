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
        ll a,b,c;
        cin>>a>>b>>c;
        ll sum=b;
        while(c--)
        {
            ll x;
            cin>>x;
            if(x<a)  sum+=x;
            else  sum+=(a-1);
        }
        cout<<sum<<"\n";
    }
    return 0;
}

