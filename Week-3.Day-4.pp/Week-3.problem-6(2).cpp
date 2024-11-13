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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll l=0,r=0;
        string ss;
        ll mn=INT_MAX;;
        while(r<=n-1)
        {
            if(s[r]=='W')   ss.push_back('W');
            if(r-l+1==k)
            {
                ll sz=ss.size();
                mn=min(mn,sz);
                if(s[l]=='W')  ss.pop_back();
                l++;r++;
            }
            else
            {
                r++;
            }
        }
        if(mn==INT_MAX)  cout<<"0\n";
        else  cout<<mn<<"\n";
    }
    return 0;
}
