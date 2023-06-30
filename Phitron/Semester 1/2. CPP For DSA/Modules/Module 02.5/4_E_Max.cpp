#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, maxx = INT_MIN;
    cin >> n;
    int a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
        maxx = max(a[i], maxx);
    }

    cout << maxx << endl;
}
    
