#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    if((2*a-1)>=(a+b))  cout<<2*a-1<<"\n";
    else if((2*b-1)>=(a+b))  cout<<2*b-1<<"\n";
    else  cout<<a+b<<"\n";
    return 0;
}