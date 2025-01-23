#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;
        string s;
        cin>>s;
        int zr = 0, on = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '1' && s[i + 1] == '1')   on++;
            else if (s[i] == '0' && s[i + 1] == '0')   zr++;
        }
        if (zr == 0 && on == 0)
        {
            cout<<"Yes\n";
        }
        else if (zr >= 2 || on >= 2)
        {
            cout<<"No\n";
        }
        else if (zr == 1 && on == 1)
        {
            cout<<"Yes\n";
        }
        else if (zr == 1)
        {
            if (s[0] == '1' || s[n - 1] == '1')   cout<<"Yes\n";
            else   cout<<"No\n";
        }
        else
        {
            if (s[0] == '0' || s[n - 1] == '0')   cout<<"Yes\n";
            else   cout<<"No\n";
        }
    }
    return 0;
}