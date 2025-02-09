
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;
    vector<ll> v(n);
    ll two = 0 , one = 0;
    ll mx = INT_MIN;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        if(i==0 && v[i]==2)   two++;
        else if(i==0 && v[i]==1)   one++;
        else if(i>=1)
        {
            if(v[i]==2 && v[i-1]==2)   
            {
                two++;
            }   
            else if(v[i]==1 && v[i-1]==1)
            {
                one++;
            } 
            if(v[i]==2 && v[i-1]==1)
            {
                mx = max(mx,2*(min(two,one)));
                two = 1;
            } 
            else if(v[i]==1 && v[i-1]==2)
            {
                mx = max(mx,2*(min(two,one)));
                one = 1;
            }
            if(i==n-1)
            {
                mx = max(mx,2*(min(two,one)));
            }   
        }
    }
    cout<<mx<<"\n";
    //cout<<one<<" "<<two<<"\n";
    return 0;
}
