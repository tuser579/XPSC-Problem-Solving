#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int mod = 1e9+7;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll a,b;
    cin>>a>>b;
    cout<<"YES\n";
    for(ll i=a;i<=b;i+=2)
    {
        cout<<i<<" "<<i+1<<"\n";
    }
    return 0;
}