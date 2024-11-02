#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        map<char,ll> mp;
        string s;
        string o;
        int m;
        cin>>m;
        for(int j=0;j<m;j++)
        {
            char ch;
            cin>>ch;
            o.push_back(ch);
            mp[ch]++;
            if(mp[ch]==1)  s.push_back(ch);
        }
        sort(s.begin(),s.end());
        map<char,char> c;
        ll k=0,l=s.size()-1;
        while(k<=l)
        {
            c[s[k]]=s[l];
            c[s[l]]=s[k];
            k++;l--;
        }
        for(char z : o)
        {
            cout<<c[z];
        }
        cout<<"\n";
    }
    return 0;
}