// Finding the size of the longest subsequence between two strings //

#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int lcs(string a, int n, string b, int m){      // n holo a er size, m holo b er size //
    // Base Case //

    if(n == 0 || m == 0){
        return 0;
    }

    if(dp[n][m] != -1){
        return dp[n][m];
    }
    
    if(a[n-1] == b[m-1]){
        int ans = lcs(a, n-1, b, m-1);
        return dp[n][m] = ans + 1;
    }

    else{
        int ans1 = lcs(a, n-1, b, m);
        int ans2 = lcs(a, n, b, m-1);
        return dp[n][m] = max(ans1, ans2);
    }
}

int main()
{
    string a;
    string b;
    cin >> a; 
    cin >> b;

    memset(dp, -1, sizeof(dp));

    int n = a.size();
    int m = b.size();

    cout << "Length of maximum subsequence: " << lcs(a, n, b, m) << endl;
    
    return 0;
}