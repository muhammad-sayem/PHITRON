#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    int x;
    cin >> x;

    int l = 0, r = n-1, ans = -1;

    while(l<=r){
        int mid = l + (r-l)/2;          /// mid = (l+r)/2; 

        if(a[mid] == x){
            ans = mid;
            break;
        }

        else if(x > a[mid]){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }

    if(ans == -1) cout << "Not Found" << endl;
    else cout << "Found at index: " << ans << endl;
    
    return 0;
}