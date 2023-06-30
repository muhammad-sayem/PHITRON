#include<stdio.h>

void fun(int *p){
    *p = 500;       
}

int main()
{
    int x = 100;
    printf("x er value normally: %d\n", x);
    fun(&x);
    printf("x er value address pathiye derefference korar pore: %d\n", x);
    
    return 0;
}

// ---------------------------------------------------------------- //

/// CONCEPT ///

/*
#include<stdio.h>

void fun(int *p){
    //printf("p er value: %p\n", p);      /// 0061FF1C ///
    printf("main er x er value: %d\n", *p);     /// 100 ///
}

int main()
{
    int x = 100;
    //printf("x er address: %p\n", &x);       /// 0061FF1C ///
    fun(&x);
    
    return 0;
}
*/