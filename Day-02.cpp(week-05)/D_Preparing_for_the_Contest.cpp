#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    int t; 
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        for(int i = n - m; i <= n; i++){
            cout << i << " ";
        }
        for(int i = n - m - 1; i> 0; i--){
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}

