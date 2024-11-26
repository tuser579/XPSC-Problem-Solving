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
        int n; 
        cin >> n;
        if (n == 1)
        {
            cout << "1\n1 3\n";
        }
        else
        {
            int cnt;
            if(n % 2 == 0)
            {
                cnt = n / 2;
            } 
            else 
            {
                cnt = (n / 2) + 1;
            }
            cout << cnt << "\n";
            int j = 1, k = 3 * n;
            for(int i = 1; i <= cnt; i++)
            {
                if(j == 3) j++;
                cout << j << " " << k << "\n";
                j += 3;
                k -= 3; 
            }
        }
    }
    return 0;
}

