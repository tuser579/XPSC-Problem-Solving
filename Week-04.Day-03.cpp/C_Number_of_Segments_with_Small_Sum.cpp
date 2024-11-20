#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    ll k;
    cin>>k;
    ll a[t];
    int l=0,r=0;
    ll ans=0;
    ll sum=0;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    while(r<t) 
    {
        sum += a[r];
        if (sum <= k) 
        {
            ans+=(r-l+1);
        }
        else 
        {
            while(sum>k && l<=r)
            {
                sum-=a[l];
                l++;
            }
            if(sum<=k)
            {
                ans+=(r-l+1);
            }
        }
        r++;
    }
    cout<<ans<<"\n";
    return 0;
}
 
