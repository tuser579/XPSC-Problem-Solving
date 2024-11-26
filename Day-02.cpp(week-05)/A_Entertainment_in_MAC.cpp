#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        ll n; 
        cin >> n;
        string s,t;
        cin>>s;
        t=s;
        reverse(t.begin(),t.end());
        if(s<t && n%2==0)
        {
            cout<<s;
        }
        else if(s<t && n%2==1)
        {
            cout<<s<<t;
        }
        else if(t<s && n%2==0)
        {
            cout<<t<<s;
        }
        else if(t<s && n%2==1)
        {
            cout<<t;
        }
        else 
        {
            cout<<s;
        }
        cout<<"\n";
    }
    return 0;
}

