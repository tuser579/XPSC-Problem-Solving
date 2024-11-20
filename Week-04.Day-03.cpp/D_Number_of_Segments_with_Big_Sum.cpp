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
    ll ans=0;
    ll sum=0;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        sum+=a[i];
        while(sum>=k)
        {
            ans+=(t-i);
            sum-=a[l]; 
            l++;       
        }    
    }  
    cout<<ans<<"\n";
    return 0;
}

