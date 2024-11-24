#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        if(x%2==1)   cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(int i=65;i<=64+(x/2);i++)
            {
                cout<<char(i)<<char(i);
            }
            cout<<"\n";
        }
    }
    return 0;
}

