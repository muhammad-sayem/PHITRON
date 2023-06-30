#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;

    while(test--){
        int n, i;
        cin >> n;
        int a[n+5];
        int b[n+5];

        bool flag = true;

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        for(i=0; i<n; i++){
            b[i] = a[i];
        }

        sort(b, b+n);

        for(i=0; i<n; i++){
            if(a[i] != b[i]){
                flag = false;
                break;
            }
        }

        if(flag == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}