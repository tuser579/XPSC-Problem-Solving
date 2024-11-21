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
        ll a,b,c;
        cin>>a>>b>>c;
        ll x=abs(a-1),y=abs(b-c)+abs(c-1);
        if(x<y)  cout<<"1\n";
        else if(x>y)  cout<<"2\n";
        else  cout<<"3\n";
    }
    return 0;
}

