#include<bits/stdc++.h>
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
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        ll ans=0;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int k=i,l=j;
                while(k>=0 && l>=0)
                {
                    sum+=a[k][l];
                    k--;l--;
                }
                k=i+1,l=j+1;
                while(k<=n-1 && l<=m-1)
                {
                    sum+=a[k][l];
                    k++;l++;
                }
                k=i-1,l=j+1;
                while(k>=0 && l<=m-1)
                {
                    sum+=a[k][l];
                    k--;l++;
                }
                k=i+1,l=j-1;
                while(k<=n-1 && l>=0)
                {
                    sum+=a[k][l];
                    k++;l--;
                }
                ans = max(ans,sum);
                sum=0;
            }    
        }
        cout<<ans<<"\n";
    }
    return 0;
}
