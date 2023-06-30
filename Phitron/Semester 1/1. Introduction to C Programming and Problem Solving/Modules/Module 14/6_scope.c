#include<stdio.h>

/// Global variable declaration ///
int x = 500;

void fun(void){
    int s = 100;
    printf("FUN er memory address: %p\n", &s); 
    printf("X er memory address: %p\n", &x); 
    printf("X er VALUE: %d\n", x); 
}

int main()
{
    int s = 200;
    printf("MAIN er memory address: %p\n", &s);
    printf("X er memory address: %p\n", &x);
    printf("X er VALUE: %d\n", x);
    fun();
    
    return 0;
}