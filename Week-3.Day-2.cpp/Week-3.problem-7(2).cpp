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
        string a,b;
        cin>>a>>b;
        char az=a.back(),bz=b.back();
        if(az=='S' && bz=='S')
        {
            ll x=a.size()-1,y=b.size()-1;
            if(x<y)   cout<<">\n";
            else if(x>y)   cout<<"<\n";
            else   cout<<"=\n";
        }
        else if(az=='S' && bz=='M')   cout<<"<\n";
        else if(az=='M' && bz=='S')   cout<<">\n";
        else if(az=='S' && bz=='L')   cout<<"<\n";
        else if(az=='L' && bz=='S')   cout<<">\n";
        else if(az=='M' && bz=='L')   cout<<"<\n";
        else if(az=='L' && bz=='M')   cout<<">\n";
        else if(az=='M' && bz=='M')   cout<<"=\n";
        else if(az=='L' && bz=='L')
        {
            ll x=a.size()-1,y=b.size()-1;
            if(x<y)   cout<<"<\n";
            else if(x>y)   cout<<">\n";
            else   cout<<"=\n";
        }
    }
    return 0;
}
