#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t,k;
    cin>>t>>k;
    ll a[t];
    int l=0,r=0;
    int ans=0;
    ll sum=0;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        sum+=a[r];
        if(sum<=k)
        {
            ans=max(ans,r-l+1);
        }
        else
        {
            sum-=a[l];
            l++;
        }
        r++;
    }
    cout<<ans<<"\n";
    return 0;
}

