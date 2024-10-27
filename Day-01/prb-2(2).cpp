#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin>>a>>b>>c;
    int ans=-1;
    for(int i=1;i<=b;i++)
    {
        if(a<=(c*i) && (c*i)<=b) 
        {
            ans=c*i;
            break;
        }
        else if((c*i)>b)   break;
    }
    if(ans==-1)  cout<<"-1\n";
    else  cout<<ans<<"\n";
    return 0;
}