#include <bits/stdc++.h>
using namespace std;
using ll = long long int; 
 
int main() 
{    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
 
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll plus = 0 , minus = 0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='+')   plus++;
            else   minus++;
        }   
        cout<<abs(plus-minus)<<"\n";
    }
    return 0;
}