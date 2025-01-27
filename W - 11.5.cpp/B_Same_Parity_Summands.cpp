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
        if(n<k)
        {
            cout<<"NO\n";
        }
        else if(k==1)
        {
            cout<<"YES\n"<<n<<"\n";
        }
        else if(n==k)
        {
            cout<<"YES\n";
            for(ll i=0;i<k;i++)
            {
                cout<<"1 ";
            }
            cout<<"\n";
        }
        else if(n%2==1 && k%2==1)
        {
            cout<<"YES\n";
            for(ll i=1;i<=k;i++)
            {
                if(i<k)   cout<<"1 ";
                else    cout<<n-(k-1);
            }
            cout<<"\n";
        }
        else if(n%2==1 && k%2==0)
        {
            if((n-(k-1))%2==0)   cout<<"NO\n";
            else
            {
                cout<<"YES\n";
                for(ll i=1;i<=k;i++)
                {
                    if(i<k)   cout<<"1 ";
                    else    cout<<n-(k-1);
                }
                cout<<"\n";
            }
        }
        else if(n%2==0 && k%2==0 && (n-(k-1))%2==1)
        {
            cout<<"YES\n";
            for(ll i=1;i<=k;i++)
            {
                if(i<k)   cout<<"1 ";
                else   cout<<(n-(k-1))<<"\n";
            }
        }
        else if(n%2==0 && k%2==0)
        {
            cout<<"YES\n";
            for(ll i=1;i<=k;i++)
            {
                if(i<k)   cout<<"2 ";
                else    cout<<n-(2*(k-1));
            }
            cout<<"\n";
        }
        else if(n%2==0 && k%2==1)
        {
            ll o = (n-(2*(k-1)));
            if(o%2==1 || o<=0 || o>=n)   cout<<"NO\n";
            else
            {
                cout<<"YES\n";
                for(ll i=1;i<=k;i++)
                {
                    if(i<k)   cout<<"2 ";
                    else    cout<<n-(2*(k-1));
                }
                cout<<"\n";
            }
        }
    }
    return 0;
}