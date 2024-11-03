#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k;
    cin>>n>>k;
    while(n--)
    {
        ll x;
        cin>>x;
        if(x!=k)  cout<<x<<" ";
    }
    return 0;
}