#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int a[n+5];
    int dp[n+5];

    for(i=1; i<=n; i++){
        cin >> a[i];
    }

    dp[1] = 0;
    dp[2] = abs(a[1]-a[2]);

    for(i=3; i<=n; i++){
        int val1 = dp[i-2] + abs(a[i-2] - a[i]);
        int val2 = dp[i-1] + abs(a[i-1] - a[i]);
        dp[i] = min(val1, val2);
    }

    cout << dp[n] << endl;
    
    return 0;
}