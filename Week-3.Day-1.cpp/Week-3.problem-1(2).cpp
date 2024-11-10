#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double x,y,z;
    cin>>x>>y>>z;
    ll w=4-(x+y+z);
    double we=x+(0.5*y)+w;
    double op=z+(0.5*y);
    if(we>op)  cout<<"YES\n";
    else  cout<<"NO\n";
    return 0;
}
