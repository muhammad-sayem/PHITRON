#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;

    while(test--){
        int n, i, even = 0, odd = 0;
        cin >> n;
        int a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
            if(a[i]%2 == 0) even++;
            else odd++;
        }

        int maxx = max(even, odd);
        int minn = min(even, odd);

        if(n%2 != 0) cout << -1 << endl;
        else if(even == odd) cout << 0 << endl;
        else cout << (maxx-minn)/2 << endl;

    }
    
    return 0;
}