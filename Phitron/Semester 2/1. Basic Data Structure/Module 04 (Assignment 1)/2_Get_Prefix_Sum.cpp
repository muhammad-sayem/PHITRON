#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i;
    cin >> n;
    long long a[n+5];
    long long pre[n+5];

    a[0] = 0;
    pre[0] = 0;

    for(i=1; i<=n; i++){
        cin >> a[i];
    }

    for(i=1; i<=n; i++){
        pre[i] = a[i] + pre[i-1];
    }

    for(i=n; i>=1; i--){
        cout << pre[i] << " ";
    }

    return 0;
}