#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    for(int i=a;i<=c;i+=a)
    {
        sum+=b;
    }
    cout<<sum<<"\n";
    return 0;
}