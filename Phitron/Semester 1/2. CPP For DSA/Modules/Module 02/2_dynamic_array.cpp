#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[5];        // Dynamic Array declare syntax. Eta baad e baki shob normal aray er motoi same vabe kaj kore //

    int i;

    for(i=0; i<5; i++){
        cin >> a[i];
    }

    for(i=0; i<5; i++){
        cout << a[i] << " ";
    }
    
    return 0;
}