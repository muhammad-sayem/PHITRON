#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    // Ascending sort //
    /*
    sort(a,a+n);

    for(i=0; i<n; i++){
        cout << a[i] << " ";
    }
    */

   // descending sort //

   sort(a,a+n, greater<int>());

    for(i=0; i<n; i++){
        cout << a[i] << " ";
    }

    
    return 0;
}