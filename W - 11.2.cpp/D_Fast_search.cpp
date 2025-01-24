#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        ll l=0,r=n-1;
        ll a=-1,b=-1;
        if(n==1)
        {
            if(v[0]>=x && v[0]<=y)    cout<<"1\n";
            else   cout<<"0\n";
            continue;
        }
        while(l <= r) 
        {
            ll mid = (l + r) / 2;
            if (x <= v[mid]) 
            {
                a = mid;
                r = mid - 1;
            }
            else 
            {
                l = mid + 1;
            }
        }
        l=0;r=n-1;
        while(l <= r) 
        {
            ll mid = (l + r) / 2;
            if (y >= v[mid]) 
            {
                b = mid;
                l = mid + 1;
            }
            else 
            {
                r = mid - 1;
            }
        }
        cout<<b-a+1<<" ";
    }
    return 0;
}
