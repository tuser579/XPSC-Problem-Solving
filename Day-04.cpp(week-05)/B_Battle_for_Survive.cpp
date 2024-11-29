#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll ans = 0;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            ans+=a[i];
        }
        cout<<ans-2*a[n - 2]<<"\n";
    }
}