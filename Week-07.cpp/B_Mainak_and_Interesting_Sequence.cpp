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
        if(n>m || (n%2==0 && m%2==1))   cout<<"No\n";
        else
        {
            cout<<"Yes\n";
            if(n%2==1)
            {
                for(ll i=1;i<n;i++)
                {
                    cout<<"1 ";
                }    
                cout<<m-n+1;
            }
            else
            {
                for(ll i=2;i<n;i++)
                {
                    cout<<"1 ";
                }
                cout<<(m-n+2)/2<<" "<<(m-n+2)/2;
            }
            cout<<"\n";
        }
    }
    return 0;
}