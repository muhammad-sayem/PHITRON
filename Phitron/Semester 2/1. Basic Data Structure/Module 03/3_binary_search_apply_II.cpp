/// Codeforces practice Sheet - 3 (Arrays) - Z ///

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, i;
    cin >> n >> q;
    int a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a+n);

    while(q--){
        int x;
        cin >> x;

        int l = 0;
        int r = n-1;

        bool flag = false;

        while(l<=r){
            int mid_index = (l+r)/2;

            if(a[mid_index] == x){
                flag = true;
                break;
            }

            else if(x > a[mid_index]){
                l = mid_index+1;
            }

            else if(x < a[mid_index]){
                r = mid_index-1;
            }
        }

        (flag == true) ? cout << "found\n": cout << "not found\n";
    }

    return 0;
}