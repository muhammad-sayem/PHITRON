// // Top Down //

// #include<bits/stdc++.h>
// using namespace std;

// int dp[1005][1005];

// int subsetSum(int n, int a[], int s){
//     // Base Case //

//     if(n == 0){
//         if(s == 0){
//             return 1;
//         }
//         else{
//             return 0;
//         }
//     }

//     if(dp[n][s] != -1){
//         return dp[n][s];
//     }

//     if(a[n-1] <= s){
//         int op1 = subsetSum(n-1, a, s-a[n-1]);     // nibo //
//         int op2 = subsetSum(n-1, a, s);            // nibo na //
//         return dp[n][s] = op1 + op2;      
//     }
//     else{
//         return dp[n][s] = subsetSum(n-1, a, s);
//     } 
// }

// int main()
// {
//     int n, i, j;
//     cin >> n;
//     int a[n+5];

//     for(i=0; i<n; i++){
//         cin >> a[i];
//     }

//     int s;
//     cin >> s;

//     for(i=0; i<=n; i++){
//         for(j=0; j<=s; j++){
//             dp[i][j] = -1;
//         }
//     }

//     cout << subsetSum(n, a, s) << endl;
    
//     return 0;
// }

// ------------------------------------------------------------------ //

// Bottom Up //

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    int s;
    cin >> s;

    int dp[n+1][s+1];

    dp[0][0] = 1;

    for(i=1; i<=s; i++){
        dp[0][i] = 0;
    }

    for(i=1; i<=n; i++){
        for(j=0; j<=s; j++){

            if(a[i-1] <= j){
                int op1 = dp[i-1][j-a[i-1]];       // nibo //
                int op2 = dp[i-1][j];              // nibo na //
                dp[i][j] = op1 + op2;

                // dp[i][j] = dp[i-1][j-a[i-1]] + dp[i-1][j];      /// shortcut 
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

    if(dp[n][s]) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
