#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin>>t;
    while(t--)
    {
        ll n,m; 
        cin >> n >> m;
        cout<<(n^m)<<"\n";
        
    }
    return 0;
}