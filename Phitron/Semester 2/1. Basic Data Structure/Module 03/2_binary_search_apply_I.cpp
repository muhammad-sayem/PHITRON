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

    int x;
    cin >> x;

    int l = 0;
    int r = n-1;
    int pos;
    
    bool flag = false;

    while(l<=r){
        int mid_index = (l+r)/2;

        if(a[mid_index] == x){
            flag = true;
            // pos = mid_index;         // jodi kokhono position niya kaj kora lage //
            break;
        }
        else if(x > a[mid_index]){
            l = mid_index+1;
        }
        else if(x < a[mid_index]){
            r = mid_index-1;
        }
    }

    if(flag) cout << "Found" << endl;
    else cout << "Not Found" << endl;
    
    return 0;
}