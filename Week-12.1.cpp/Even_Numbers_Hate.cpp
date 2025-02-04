#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int even=0 , odd=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2==0)   even++;
            else   odd++;
        }
        if(odd==0)   cout<<"0\n";
        else   cout<<(1+even)+((odd-1)/2)<<"\n";
    }
    return 0;
}
    