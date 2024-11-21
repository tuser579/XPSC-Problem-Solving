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
        for(int i=0;i<n;i++)
        {
            if(s[i]!='+' && s[i+3]=='0')
            {
                cout<<char(s[i]-48+96);
            }
            else if(s[i]!='+' && s[i+2]=='0')
            {
                string a;
                a.push_back(s[i]);
                a.push_back(s[i+1]);
                int num = atoi(a.c_str());
                cout<<char(num+96);
                s[i]='+';s[i+1]='+';s[i+2]='+';
                s.clear();
            }
            else if(s[i]!='+')
            {
                cout<<char(s[i]-48+96);
            }
        }
        cout<<"\n";
    }
    return 0;
}

