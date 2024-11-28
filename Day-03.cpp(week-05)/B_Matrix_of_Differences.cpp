#include<bits/stdc++.h>
using namespace std;
using ll = long long int; 

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  
    while (t--) 
    {
        int n;
        cin >> n;  
        ll matrix[n][n];
        int current = 1,ret = n*n;
        for (int i = 0; i < n; i++) 
        {
            if (i % 2 == 0) 
            {
                for (int j = 0; j < n; j++) 
                {
                    if(j%2==0)   matrix[i][j] = ret--;
                    else   matrix[i][j] = current++;
                }
            }    
            else 
            {
                int p=0;
                for (int j = n - 1; j >= 0; j--) 
                {
                    if(p==0)
                    {
                        p=1;
                        if(n%2==0)
                        matrix[i][j] = ret--;
                        else
                        matrix[i][j] = current++;
                    }    
                    else
                    {
                        p=0;
                        if(n%2==0)
                        matrix[i][j] = current++;
                        else
                        matrix[i][j] = ret--;
                    }    
                }
            }
        }
        for (int i = 0; i < n; i++) 
        {
            for(int j = 0; j < n; j++) 
            {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
    }        
    return 0;
}
