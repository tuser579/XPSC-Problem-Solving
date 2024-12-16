#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;
	for (int i = 0; i < n; i++)
    {
	    if(i & 2)  cout<<"b";
        else   cout<<"a";
    }
    return 0;
}
