
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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll zero = 0 , one = 0;
        ll all0 = 0 , all1 = 0;
        for(ll i=0;i<n;i++)
        {
            if(i==n-1)
            {
                if(s[i]=='0')   all0++;
                else if(s[i]=='1')   all1++;
            }
            if(s[i]=='0')
            {
                zero++;
                if(one !=0 )
                {
                    all1++;
                    one = 0;
                }
            }
            else if(s[i]=='1')
            {
                one++;
                if(zero != 0)
                {
                    all0++;
                    zero = 0;
                }
            }
        }
        cout<<min(all0,all1)<<"\n";
    } 
    return 0;
}
