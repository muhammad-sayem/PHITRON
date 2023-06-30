#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int *a = new int[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    int m;
    cin >> m;
    int b[m+5];

    for(i=0; i<n; i++){
        b[i] = a[i];
    }

    for(i=n; i<m; i++){
        cin >> b[i];
    }
    
    for(i=0; i<m; i++){
        cout << b[i] << " ";
    }

    delete[] a;

    // cout << endl;

    // for(i=0; i<n; i++){
    //     cout << a[i] << " ";
    // }

    return 0;
}