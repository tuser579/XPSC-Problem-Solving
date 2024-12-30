#include<bits/stdc++.h>
using namespace std;
using ll = long long int; 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    int a[26]={0};
    for(int i=0;i<s.size();i++)
    {
        a[s[i]-65]++;
    }
    int cnt=0;
    char ch;
    for(int i=0;i<26;i++)
    {
        if(a[i]%2==1)
        {
            cnt++;
            ch=i+65;
        }
    }
    if(cnt>1)   cout<<"NO SOLUTION";
    else
    {
        for(int i=0;i<26;i++)
        {
            if(a[i]!=0 && a[i]%2==0)
            {
                int x=a[i]/2;
                while(x--)
                {
                    char c=i+65;
                    cout<<c;
                }
            }
        }
        if(cnt==1)
        {
            for(int i=0;i<a[ch-65];i++)
            {
                cout<<ch;
            }
        }
        for(int i=25;i>=0;i--)
        {
            if(a[i]!=0 && a[i]%2==0)
            {
                int x=a[i]/2;
                while(x--)
                {
                    char c=i+65;
                    cout<<c;
                }
            }
        }
    }
    return 0;
}