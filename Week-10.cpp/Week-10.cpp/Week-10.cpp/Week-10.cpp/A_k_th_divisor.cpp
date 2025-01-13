#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,k;
    cin >> n >> k;
    vector<ll> a;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            a.push_back(i);
            if(n/i != i)   a.push_back(n/i);
        }
        //if(a.size()==k)  break;
    }
    sort(a.begin(),a.end());
    if(a.size()<k)   cout<<"-1\n";
    else   cout<<a[k-1]<<"\n";
    return 0;
}