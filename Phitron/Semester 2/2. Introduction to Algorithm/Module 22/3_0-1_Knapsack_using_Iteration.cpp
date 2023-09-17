#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    int v[n+5];     // array for values //
    int w[n+5];     // array for wights //

    for(i=0; i<n; i++){
        cin >> v[i];
    }

    for(i=0; i<n; i++){
        cin >> w[i];
    }

    int s;          // s holo koto tuku weight er capacity asy ase //
    cin >> s;

    int dp[n+1][s+1];

    for(i=0; i<=n; i++){
        for(j=0; j<=s; j++){
            if(i==0 || j==0) {
                dp[i][j] = 0;
            }
        }
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=s; j++){
            
            if(w[i-1] <= j){
                int op1 = dp[i-1][j-w[i-1]] + v[i-1];        // nibo, ar nile oi value ta plus korte hoy //
                int op2 = dp[i-1][j];        // nibo na // 
                dp[i][j] = max(op1, op2);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }

        }
    }

    // Printing dp array //

    // for(i=0; i<=n; i++){
    //     for(j=0; j<=s; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << "Maximum: " << dp[n][s] << endl;

    return 0;
}