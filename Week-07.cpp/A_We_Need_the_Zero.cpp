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
        ll n; 
        cin >> n;
        vector<ll> a(n);
        ll sob=0;
        for(ll i=0;i<n;i++)   
        {
            cin>>a[i];
            sob=(sob^a[i]);   
        } 
        if(n%2==0 && sob==0)   cout<<0<<"\n";
        else if(n%2==0 && sob!=0)   cout<<-1<<"\n";
        else   cout<<sob<<"\n";
    }
    return 0;
}