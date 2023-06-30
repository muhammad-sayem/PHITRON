#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[5];
    int i;

    for(i=0; i<5; i++){
        cin >> a[i];
    }

    int *b = new int[7];        // eta dynamic na korleo somossa nai karon eta niyei kaj kora hobe , eta delete kora hobe na //

    for(i=0; i<5; i++){
        b[i] = a[i];
    }

    b[5] = 60;
    b[6] = 70;

    for(i=0; i<7; i++){
        cout << b[i] << " ";
    }

    cout << endl;

    // heap memory theke a[5] delete korar jonno (karon a[5], ei array er ar dorkar nai pore) //

    delete[] a;     // jodi shudhu "delete" use kora hoy tahole shudhu a[0] delete korbe // 

    // for(i=0; i<5; i++){
    //     cout << a[i] << " ";
    // }

    return 0;
}