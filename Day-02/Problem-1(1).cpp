#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll sercnt=0,dencnt=0;
    ll l=0,r=n-1;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(ll i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(v[l]>v[r])
            {
                sercnt+=v[l];
                l++;
            }
            else
            {
                sercnt+=v[r];
                r--;
            }
        }
        else
        {
            if(v[l]>v[r])
            {
                dencnt+=v[l];
                l++;
            }
            else
            {
                dencnt+=v[r];
                r--;
            }
        }
    }
    cout<<sercnt<<" "<<dencnt<<"\n";
    return 0;
}