#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll s = 300 - n - 1;
        ll m = (1000 - k)/20;
        while(true)
        {
            if(((s*20)+(s+n)+k) > 1000)   s--;
            else  break;
        }
        cout<<s<<"\n";
    }
    return 0;
}
