#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, flag = 0;
    cin >> n;
    int a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    i = 0;
    j = n-1;

    while(i<j){
        if(a[i] != a[j]){
            flag = 1;
            break;
        }
        i++;
        j--;
    }

    if(flag == 1) cout << "NO" << endl;
    else cout << "YES" << endl;
    
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, flag = 0;
    cin >> n;
    int a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    i = 0;
    j = n-1;

    while(i<j){
        if(a[i] != a[j]){
            cout << "NO" << endl;
            return 0;
        }
        i++;
        j--;
    }

    cout << "YES" << endl;
    
    return 0;
}
*/