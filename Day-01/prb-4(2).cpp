#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    if(s.size()==4)  cout<<s<<"\n";
    else if(s.size()==3)  cout<<"0"<<s<<"\n";
    else if(s.size()==2)  cout<<"00"<<s<<"\n";
    else if(s.size()==1)  cout<<"000"<<s<<"\n";
    return 0;
}