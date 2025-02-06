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
        vector<ll> v(n);
        vector<ll> lf;
        vector<ll> rg;
        bool fg = false;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            if(i==0)   lf.push_back(v[i]);
            else if(v[i]<v[i-1] || fg==true) 
            {
                rg.push_back(v[i]);
                fg = true;
            }  
            else if(i>=1 && v[i]>=v[i-1])   
            {
                lf.push_back(v[i]);
            }    
        }
        if(lf.size()==v.size())
        {
            cout<<"Yes\n";continue;
        }
        else
        {
            bool ans = true;
            for(ll i=1;i<rg.size();i++)
            {
                if(rg[i]<rg[i-1])
                {
                    ans = false;
                    break;
                }
            }
            if(ans==false)
            {
                cout<<"No\n";
            }
            else
            {
                for(ll i=0;i<lf.size();i++)
                {
                    if(i==0 && rg.back()>lf[i])  
                    {
                        ans = false;
                        break; 
                    }
                    else if(i>=1 && lf[i]<lf[i-1])
                    {
                        ans = false;
                        break;
                    }
                }
                if(ans)   cout<<"Yes\n";
                else   cout<<"No\n";
            }
        }
    }
    return 0;
}