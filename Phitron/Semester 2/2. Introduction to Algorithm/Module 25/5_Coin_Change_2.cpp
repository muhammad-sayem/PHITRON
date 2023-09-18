// Minimum koyta coin diye target value banano jay sheta ber kore //

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int w[n+5];

    for(i=0; i<n; i++){
        cin >> w[i];
    }

    int s;
    cin >> s;

    int dp[n+1][s+1];

    dp[0][0] = 0;

    for(i=1; i<=s; i++){
        dp[0][i] = INT_MAX - 1;
    }

    for(i=1; i<=n; i++){
        for(j=0; j<=s; j++){
            
            if(w[i-1] <= j){
                dp[i][j] = min(1 + dp[i][j-w[i-1]], dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }

        }
    }

    // for (int i = 0; i <= n; i++){
    //     for (int j = 0; j <= s; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    if(dp[n][s] == INT_MAX - 1) cout << "Not Possible" << endl;
    else cout << "Minimum coins needed: " << dp[n][s] << endl;
    
    return 0;
}