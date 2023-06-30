#include<stdio.h>

void fun(int i){
    if(i == 6) return;          // Base Case //
    fun(i+1);                   // recursion age call korle r pore print/kaj korle recursion reverse a kaj kre
    printf("%d\n", i);
    
}

int main()
{
    fun(1);
    
    return 0;
}


