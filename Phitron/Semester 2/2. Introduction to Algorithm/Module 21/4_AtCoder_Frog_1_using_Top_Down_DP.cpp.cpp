#include<bits/stdc++.h>
#define  ll  long long
using namespace std;

const int N = 1e5+5;
int dp[N];

int solve(int a[], int n){
    // Base Case //
    if(n==1) {
        return 0;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    else if(n==2){
        dp[n] = abs(a[2] - a[1]);
        return dp[n];
    }

    else{
        int choice1 = solve(a, n-1) + abs(a[n] - a[n-1]);
        int choice2 = solve(a, n-2) + abs(a[n] - a[n-2]);
        dp[n] = min(choice1, choice2);
        return dp[n];
    }
}

int main()
{
    int n, i;
    cin >> n;

    int a[n+5];

    for(i=1; i<=n; i++){
        cin >> a[i];
        dp[i] = -1;
    }

    cout << solve(a, n) << endl;

    return 0;
}