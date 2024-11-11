#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0;i < n;i++) 
    {
        cin >> a[i];
    }
    for (int i = 0;i < m;i++)
    {
        cin >> b[i];
    }
    int lft = 0, rgt = 0, cnt = 0;
    while (rgt < m) 
    {
        if (lft < n && a[lft] < b[rgt]) 
        {
            cnt++, lft++;
        }
        else 
        {
            cout << cnt << " ";
            rgt++;
        }
    }
    return 0;
}
