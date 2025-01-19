#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int mod = 1e9+7;

void solve(ll t)
{
    string s;
    cin>>s;
    ll two=0,three=0;
    ll sum=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='2')   two++;
        else if(s[i]=='3')   three++;
        sum+=(s[i]-48);
    }
    if(sum%9==0)   
    {
        cout<<"YES\n";
        return;
    }    
    /*else if(two==0)
    {
        ll z=sum;
        for(ll i=1;i<=three;i++)
        {
            z+=6;
            if(z%9==0)   
            {
                cout<<"YES\n";
                return;
            }
        }
    }
    else if(three==0)
    {
        ll z=sum;
        for(ll i=1;i<=two;i++)
        {
            z+=2;
            if(z%9==0)   
            {
                cout<<"YES\n";
                return;
            }
        }
    }*/
    else
    {
        ll z=sum;
        for(ll i=0;i<=two;i++)
        {
            for(ll j=0;j<=three;j++)
            {
                if((z+(i*2)+(j*6))%9==0)
                {
                    cout<<"YES\n";
                    return;
                }
            }
        }
    }
    cout<<"NO\n";
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    while(t--)
    {
        solve(t);
    }
    return 0;
}