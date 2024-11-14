#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll a,b;
    cin>>a>>b;
    ll sum=a+b;
    vector<int> v;
    while(sum--)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int f : v)
    {
        cout<<f<<" ";
    }
    return 0;
}
