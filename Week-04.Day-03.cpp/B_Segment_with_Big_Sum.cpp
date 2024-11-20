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
    int l=0;
    int ans=INT_MAX;
    ll sum=0;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        sum+=a[i];
        while(sum>=k)
        {
            ans=min(ans,i-l+1);
            sum-=a[l];
            l++;
        }    
    }  
    if(ans==INT_MAX)  cout<<"-1\n";
    else   cout<<ans<<"\n";
    return 0;
}

