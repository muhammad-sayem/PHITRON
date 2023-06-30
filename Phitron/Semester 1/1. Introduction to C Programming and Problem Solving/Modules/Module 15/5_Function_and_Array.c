#include<stdio.h>

void fun(int a[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    fun(a, 5);
    
    return 0;
}

// --------------------------------------------------------------------- //

/*
#include<stdio.h>

void fun(int a[], int size){        // size recieve korar jonno size name er variable declare kora hoise ///
    int i;

    for(i=0; i<size; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<size; i++){
        printf("%d ", a[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n+5];

    fun(a, n);          // a ---> array er name and n ---> array er size ///
    
    return 0;
}
*/

// ------------------------------------------------------- //

/*
#include<stdio.h>

void fun(double a[], int n){
    for(int i=0; i<n; i++){
        printf("%0.2lf ", a[i]);
    }
}

int main()
{
    double a[5] = {10.3, 20.2, 30.2, 40.6, 50.8};
    fun(a, 5);
    
    return 0;
}
*/