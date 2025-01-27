#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        cout<<(k+((k-1)/(n-1)))<<"\n";
    }    
    return 0;
}