#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin>>t;
    while(t--)
    {
        ll n; 
        cin >> n;
        vector<ll> a(n);
        ll sob=0;
        for(ll i=0;i<n;i++)   
        {
            cin>>a[i];
            if(i==1)
            {
                sob=(a[i])^(a[i-1]);
            }
            else if(i>1)
            {
                sob=(sob^a[i]);
            }     
        } 
        ll mn=sob;
        for(ll i=0;i<n;i++)
        {
            ll z=(sob^a[i]);
            if(z<mn)  mn=z;
        }
        cout<<mn<<"\n";
    }
    return 0;
}