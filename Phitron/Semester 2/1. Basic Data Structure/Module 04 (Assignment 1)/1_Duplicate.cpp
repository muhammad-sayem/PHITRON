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

    sort(a, a+n);

    bool flag = false;

    for(i=0; i<n-1; i++){
        if(a[i] == a[i+1]){
            flag = true;
            break;
        }
    }

    if(flag == true) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}