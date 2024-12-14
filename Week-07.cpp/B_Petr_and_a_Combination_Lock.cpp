#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin>>t;
    ll a[t],pre[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        if(i==0)   pre[i]=a[i];
        else   pre[i]=a[i]+pre[i-1];  
        if(i==t-1 && pre[i]==360)   
        {
            cout<<"YES\n";
            return 0;
        }     
    }
    for(int i=0;i<t;i++)
    {
        if(pre[i]==pre[t-1]-pre[i])
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}