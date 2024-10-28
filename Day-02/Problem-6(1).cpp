#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        vector<int> bc;
        vector<int> Bc;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b' && bc.size()==0)  continue;
            else if(s[i]=='B' && Bc.size()==0)  continue;
            else if(s[i]=='b' && bc.size()!=0)
            {
                s[bc[bc.size()-1]]='b';
                bc.pop_back();
            }        
            else if(s[i]=='B' && Bc.size()!=0)
            {
                s[Bc[Bc.size()-1]]='b';
                Bc.pop_back();
            }        
            else if('a'<=s[i] && s[i]<='z')  bc.push_back(i);
            else if('A'<=s[i] && s[i]<='Z')  Bc.push_back(i);
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='b' && s[i]!='B')   cout<<s[i];
        }
        cout<<"\n";
    }
    return 0;
}
 