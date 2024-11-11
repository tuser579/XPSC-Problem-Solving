#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    map<int,int> mp;
    for (int i = 0;i < n;i++) 
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    ll cnt=0;
    for (int i = 0;i < m;i++)
    {
        int x;
        cin>>x;
        if(mp[x]!=0)  cnt+=mp[x];
    }
    cout<<cnt<<"\n";
    return 0;
}
