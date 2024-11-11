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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        if(s.size()==1)  cout<<"1\n";
        else
        {
            ll sz=s.size();
            ll i=0,j=n-1;
            while(i<j)
            {
                if(s[i]=='0' && s[j]=='1')
                {   sz-=2;
                    i++;j--;
                }    
                else if(s[i]=='1' && s[j]=='0')  
                {
                    sz-=2;
                    i++;j--;
                }    
                else  break;
            }
            cout<<sz<<"\n";
        }
    }
    return 0;
}
