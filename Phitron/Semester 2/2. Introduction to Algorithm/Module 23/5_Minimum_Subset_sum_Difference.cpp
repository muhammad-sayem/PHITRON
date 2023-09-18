#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int a[n+5];
    int s = 0;

    for(i=0; i<n; i++){
        cin >> a[i];
        s += a[i];
    }

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

    vector<int> v;

    for(i=0; i<=n; i++){
        for(j=0; j<=s; j++){
            if(dp[i][j] == 1){
                v.push_back(j);
            }
        }
    }

    int ans = INT_MAX;

    for(auto val: v){
        int s1 = val;
        int s2 = s-s1;

        ans = min(ans, abs(s1 - s2));
    }
    cout << ans << endl;
    
    return 0;
}