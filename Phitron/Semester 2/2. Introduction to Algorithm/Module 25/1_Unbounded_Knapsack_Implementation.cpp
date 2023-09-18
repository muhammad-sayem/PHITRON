#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int unbounded_knapsack(int n, int s, int v[], int w[]){
    // Base Case //

    if(n == 0 || s == 0){
        return 0;
    }

    if(dp[n][s] != -1){
        return dp[n][s];
    }
    
    if(w[n-1] <= s){
        int ch1 = v[n-1] + unbounded_knapsack(n, s-w[n-1], v, w);       // jekhane asi oitai abar nibo //
        int ch2 = unbounded_knapsack(n-1, s, v, w);
        return dp[n][s] = max(ch1, ch2);
    }
    else{
        return dp[n][s] = unbounded_knapsack(n-1, s, v, w);
    }
}

int main()
{
    int n, s, i;
    cin >> n >> s;

    int v[n+5];
    int w[n+5];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            dp[i][j] = -1;
        }
    }

    for(i=0; i<n; i++){
        cin >> v[i];
    }

    for(i=0; i<n; i++){
        cin >> w[i];
    }

    cout << "Maximum: " << unbounded_knapsack(n, s, v, w) << endl;
    
    return 0;
}