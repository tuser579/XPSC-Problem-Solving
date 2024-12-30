#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin >> n;
   vector<ll> v(n);
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
   }
   ll mn=1e18;
   for (int mask = 0;mask < (1 << n);mask++) 
   {
        ll sum=0,sum1=0;
        for (int k = 0;k < n;k++) 
        {
            if ((mask >> k) & 1) {
               sum+=v[k];
            }
            else {
               sum1+=v[k];
            }
        }
        if(abs(sum-sum1)<mn)  mn=abs(sum-sum1);
   }
   cout<<mn<<"\n";
   return 0;
}