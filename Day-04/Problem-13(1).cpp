#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    map<ll,ll> mp;
    int mx=0;
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        int a= ++mp[x];
        mx = max(mx,a);
    }
    cout<<mx<<"\n";
    return 0;
}