#include<bits/stdc++.h>
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
        ll n;
        cin>>n;
        vector<ll> a(n),b(n);
        for(ll i=0;i<n;i++)   cin>>a[i];
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
            if(i==n-1)   sum+=a[i];
            if(i>=1)
            {
                if(a[i-1]>b[i])  sum+=(a[i-1]-b[i]);
            }
        }
        cout<<sum<<"\n";    
    }
    return 0;
}