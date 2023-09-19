#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b;
    cin >> a; 
    cin >> b;
    int n = a.size();
    int m = b.size();
    int i, j;

    int dp[n+1][m+1];

    for(i=0; i<=n; i++){
        for(j=0; j<=m; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
        }
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){

            if(a[i-1] == b[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = 0;
            }
        }
    }

    // for(i=0; i<=n; i++){
    //     for(j=0; j<=m; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int maxx = 0;
    int ci, cj;

    for(i=0; i<=n; i++){
        for(j=0; j<=m; j++){

            if(dp[i][j] > maxx){
                maxx = dp[i][j];
                ci = i;
                cj = j;
            }

        }
    }

    string ans;

    while(ci != 0 && cj != 0){
        if(a[ci-1] == b[cj-1]){
            ans += a[ci-1];
            ci--;
            cj--;
        }
        else{
            break;
        }
    }

    reverse(ans.begin(), ans.end());

    cout << "Maximum substring: " << ans << endl;

    cout << "Length of maximum substring: " << maxx << endl;


    return 0;
}