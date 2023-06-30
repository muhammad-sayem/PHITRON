#include<stdio.h>
int main()
{
    int x = 100;
    int *ptr = &x;

    // printf("x er address: %p\n", &x);
    // printf("x er address: %p\n", ptr);
    // printf("ptr er value: %p\n", ptr);
    // printf("ptr er adress: %p\n", &ptr);

    // ---------------------------------------------- //

    // x = 200;
    // *ptr = 200;

    /// x -> *ptr same jinish ///

    // printf("x er value : %d\n", x);
    // printf("x er value : %d\n", *ptr);

    return 0;
}


/*
#include<stdio.h>
int main()
{
    double x = 15.26;
    double *ptr = &x;
    double *ptr2 = ptr;

    // x = 30.76;
    // *ptr = 20.76;
    *ptr2 = 50.87;

    printf("x er value - %.2lf\n", x);
    printf("x er value - %.2lf\n", *ptr);
    printf("x er value - %.2lf\n", *ptr2);
    
    return 0;
}
*/