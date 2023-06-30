#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, q, i;
    cin >> n >> q;

    long long a[n+5];

    for(i=1; i<=n; i++){
        cin >> a[i];
    }

    a[0] = 0;

    for(i=1; i<=n; i++){
        a[i] = a[i-1] + a[i];
    }

    while(q--){
        int l, r;
        cin >> l >> r;

        cout << a[r] - a[l-1] << endl;
    }
    
    return 0;
}