#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;

    while(test--){
        int n, i, j, minn = 1e9, sum, ans;
        cin >> n;
        int a[n+5];

        for(i=1; i<=n; i++){
            cin >> a[i];
        }

        for(i=1; i<=n-1; i++){
            for(j=i+1; j<=n; j++){
                sum = a[i]+a[j]+j-i;
                minn = min(sum, minn);
            }
        }

        cout << minn << endl;
    }

    return 0;
}