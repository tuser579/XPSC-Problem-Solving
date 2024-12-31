#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)   cin >> arr[i];
    unordered_map<ll,ll> remainder_count;
    ll count = 0;
    remainder_count[0] = 1;
    ll prefix_sum = 0;
    for (ll i = 0; i < n; i++) 
    {
        prefix_sum += arr[i];
        ll remainder = (prefix_sum % n + n) % n;
        
        if (remainder_count.find(remainder) != remainder_count.end()) 
        {
            count += remainder_count[remainder];
        }
        remainder_count[remainder]++;
    }
    cout << count << "\n";
    return 0;
}
