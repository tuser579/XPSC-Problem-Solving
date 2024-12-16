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
        int n;
        cin>>n;
        string s;
        cin>>s;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')  sum++;
        }
        if((min(sum,n-sum))%2==1)  cout<<"Zlatan\n";
        else  cout<<"Ramos\n";
    }
    return 0;
}