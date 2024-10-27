#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int frq[26]={0};
    for(int i=0;i<s.size();i++)
    {
        frq[s[i]-'a']++;
    }
    char ch='@';
    for(int i=0;i<26;i++)
    {
        if(frq[i]==0)
        {
            ch=i+'a';
            break;
        }
    }
    if(ch=='@')  cout<<"None\n";
    else  cout<<ch<<"\n";
    return 0;
}