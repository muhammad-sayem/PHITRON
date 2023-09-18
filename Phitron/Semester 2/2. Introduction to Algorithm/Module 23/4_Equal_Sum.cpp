#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int a[n+5];
    int sum = 0;

    for(i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
    }

    if(sum%2 != 0) cout << "Not Possible" << endl;
    else{
        int s = sum/2;
        bool dp[n+1][s+1];

        dp[0][0] = true;

        for(i=1; i<=s; i++){
            dp[0][i] = false;
        }

        for(i=1; i<=n; i++){
            for(j=0; j<=s; j++){

                if(a[i-1] <= j){
                    dp[i][j] = dp[i-1][j-a[i-1]] || dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }

            }
        }

        if(dp[n][s]) cout << "Possible" << endl;
        else cout << "Not Possible" << endl;
    }
    
    return 0;
}