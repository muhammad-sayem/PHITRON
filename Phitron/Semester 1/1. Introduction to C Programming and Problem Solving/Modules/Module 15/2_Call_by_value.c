#include<stdio.h>

void fun(int x){
    printf("fun er x er address: %p\n", &x);        /// 0061FF00 ///
}

int main()
{
    int x = 10;
    printf("main er x er address: %p\n", &x);       /// 0061FF1C ///
    fun(x);
    
    return 0;
}

// -------------------------------------------------------------------- //

// SUPER IMPORTANT //
/*
#include<stdio.h>

void fun(int x){

    printf("fun er value change er aage: %d\n", x);
    x = 200;
    printf("fun er value change er pore: %d\n", x);
}

int main()
{
    int x = 10;
    fun(x);
    printf("main er x er value: %d\n", x);
    
    return 0;
}
*/