#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005];

bool subsetSum(int n, int a[], int s){
    // Base Case //

    if(n == 0){
        if(s == 0){
            return true;
        }
        else{
            return false;
        }
    }

    if(dp[n][s] != -1){
        return dp[n][s];
    }

    if(a[n-1] <= s){
        bool op1 = subsetSum(n-1, a, s-a[n-1]);     // nibo //
        bool op2 = subsetSum(n-1, a, s);            // nibo na //
        return dp[n][s] = op1 || op2;      // jekono ekta true hoilei true return kore, shob false hoilei false return kore //
    }
    else{
        return dp[n][s] = subsetSum(n-1, a, s);
    } 
}

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

    for(i=0; i<=n; i++){
        for(j=0; j<=s; j++){
            dp[i][j] = -1;
        }
    }

    if(subsetSum(n, a, s)) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}