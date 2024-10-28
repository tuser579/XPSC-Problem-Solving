#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    while(n--)
    {
        ll l=0,r=0;
        ll x;
        cin>>x;
        for(int i=1;i<=x;i++)
        {
           char ch;
           cin>>ch;
           if(l==0 && ch=='B')
           {
               l=i;
               r=i;
           }       
           else if(ch=='B')   r=i;
        }
        cout<<r-(l-1)<<"\n";
    }
    return 0;
}