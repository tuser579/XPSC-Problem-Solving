#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) 
    {
        ll n,x;
        cin>>n>>x;
        ll mxx = 0;
        ll sum = 0;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==x)  mxx++; 
            else if(v[i]>x)  
            {
                mxx++;
                sum+=(v[i]-x);
            }     
        }
        sort(v.rbegin(),v.rend());
        for(ll i=0;i<n;i++)
        {
            if(x>v[i] && (x-v[i])<=sum)
            {
                mxx++;
                sum-=(x-v[i]);
            }
        }
        cout<<mxx<<"\n";
    } 
    return 0;
}
