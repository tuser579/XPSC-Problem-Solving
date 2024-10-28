#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        map<string,pair<int,int> >  mp;
        int a=0,b=0,c=0;
        for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=x;j++)
            {
                string s;
                cin>>s;
                if(i==1)
                {
                    if(mp[s].first==0)  a+=3;
                    ++mp[s].first;
                    mp[s].second=i;
                }  
                else if(i==2)
                {
                    ++mp[s].first;
                    if(mp[s].first==1)  
                    {
                        b+=3;
                        mp[s].second=i;
                    }        
                    else if(mp[s].first==2)
                    {
                        b+=1;
                        a-=2;
                    }
                }
                else
                {
                    ++mp[s].first;
                    if(mp[s].first==1)  c+=3;
                    else if(mp[s].first==2)
                    {
                        c+=1;
                        if(mp[s].second==1)
                        {
                            a-=2;
                        }
                        else
                        {
                            b-=2;
                        }
                    }
                    else
                    {
                        --a;
                        --b;
                    }
                }
            }
        }
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }
    return 0;
}
 