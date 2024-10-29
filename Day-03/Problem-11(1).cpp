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
		bool flag = false;
		for(int i=0; i<s.size(); i++)
		{
			if(i==s.size()-1 && flag==false)
			{
			    cout<<s[i];
				if(s[i]=='z') cout<<char(s[i]-1);
				else  
				{
				    cout<<char(s[i]+1);
				}		    
			}
			else if(s[i]==s[i+1] && flag==false)
			{
				cout<<s[i];
                if(s[i]=='z') cout<<"w";
                else  cout<<char(s[i]+1);
				flag=true;
			}
			else  
			{
			    cout<<s[i];
			}    
		}
		cout<<"\n";
	}
	return 0;
}