#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+1];
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int p=0;
        for(ll i=1;i<n;i++)
        {
            if(a[i]>a[i+1])
            {
                p=i;
                break;
            }
        }
        if(p==0)   cout<<"Yes\n";
        else
        {
            int flag=0;
            for(int i=p+1;i<=n;i++)
            {
                int j=(i%n)+1;
                if(a[i]>a[j])  flag=1;
            }
            if(flag==0)   cout<<"Yes\n";
            else   cout<<"No\n";
        }
    }
    return 0;
}