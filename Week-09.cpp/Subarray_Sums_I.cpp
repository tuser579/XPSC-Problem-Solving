#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)   cin >> a[i];
    ll left = 0, right = 0, current_sum = 0, count = 0;
    while (right < n) 
    {
        current_sum += a[right];
        while (current_sum > x && left <= right) 
        {
            current_sum -= a[left];
            left++;
        }
        if (current_sum == x) 
        {
            count++;
        }
        right++;
    }
    cout << count << "\n";
    return 0;
}
