#include<stdio.h>

void fun(int a[], int n, int i){

    if(i == n) return;          /// Base Case ///

    printf("%d ", a[i]);
    fun(a, n, i+1);
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n+5];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    fun(a, n, 0);           /// a holo array er name, n holo size and 0 diye bujhay 0 theke print shuru mane shurur value diye dite hoy //

    return 0;
}


/// Using another Base Case ///
/*
#include<stdio.h>

void fun(int a[], int n, int i){

    printf("%d ", a[i]);
    if(i == n-1) return;            /// Base Case ///
    fun(a, n, i+1);
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n+5];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    fun(a, n, 0);           /// a holo array er name, n holo size and 0 diye bujhay 0 theke print shuru mane shurur value diye dite hoy //

    
    return 0;
}
*/