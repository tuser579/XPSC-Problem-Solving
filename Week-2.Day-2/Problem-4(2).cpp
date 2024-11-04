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
        int T=0,i=0,m=0,u=0,r=0;
        int n;
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            char c;
            cin>>c;
            if(c=='T')   T++;
            else if(c=='i')   i++;
            else if(c=='m')   m++;
            else if(c=='u')   u++;
            else if(c=='r')   r++;
        }
        if(T==1 && i==1 && m==1 && u==1 && r==1 && n==5)   cout<<"YES\n";
        else  cout<<"NO\n";
    }
    return 0;
}