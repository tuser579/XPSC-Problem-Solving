#include<bits/stdc++.h>
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
        ll n,a,b,c;
        cin>>n>>a>>b>>c;
        ll k = (a+b+c);
        ll sum = 0;
        if(k >= n)
        {
            if(a>=n)   cout<<1<<"\n";
            else if(a+b>=n)   cout<<2<<"\n";
            else cout<<3<<"\n";
        }
        
        else if((n%k) != 0)
        {
            sum=(n/k)*3;
            if(((n/k)*k +a) >=n)   cout<<(sum+1)<<"\n";
            else if((((n/k)*k) +a+b) >=n)   cout<<(sum+2)<<"\n";
            else cout<<(sum+3)<<"\n";
        }

        else if(n % k == 0)
        {
            cout<<(n/k)*3<<"\n";
        }  
    }
    return 0;
}