#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i, x;
    cin >> n;
    long long a[n+5];
    long long pre[n+5];

    a[0] = 0;
    pre[0] = 0;
    
    for(i=1; i<=n; i++){
        cin >> a[i];
    }

    for(i=1; i<=n; i++){
        pre[i] = pre[i-1] + a[i];
    }
    
    for(i=1; i<=n; i++){
        cout << pre[i] << " ";
    }


    // With one array //

    /*
    for(i=1; i<=n; i++){
        a[i] = a[i-1] + a[i];
    }

    for(i=1; i<=n; i++){
        cout << a[i] << " ";
    }
    */
    
    return 0;
}