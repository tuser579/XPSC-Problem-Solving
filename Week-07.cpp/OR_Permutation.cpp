#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin>>t;
    while(t--)
    {
        int n; 
        cin >> n;
        for(int i=n;i>=1;i--)   cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}