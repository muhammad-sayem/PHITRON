#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, i, j;
    cin >> n >> s;

    int v[n+5];
    int w[n+5];

    int dp[n+1][s+1];

    for(int i = 0; i <= n; i++){
        for (int j = 0; j <= s; j++){
            if(i == 0 || j == 0) {
                dp[i][j] = 0;
            }
        }
    }

    for(i=0; i<n; i++){
        cin >> v[i];
    }

    for(i=0; i<n; i++){
        cin >> w[i];
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=s; j++){

            if(w[i-1] <= j){
                dp[i][j] = max(v[i-1] + dp[i][j-w[i-1]], dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    // for(i=0; i<=n; i++){
    //     for(j=0; j<=s; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << "Maximum: " << dp[n][s] << endl;
    
    return 0;
}