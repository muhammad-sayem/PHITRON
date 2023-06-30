// Assumption Method //

#include<stdio.h>

void fun(int i){

    if(i == 0) return;          // Base Case //
    
    printf("%d\n", i);
    fun(i-1);
}

int main()
{
    fun(5);
    
    return 0;
}



// Using another Base Case //
/*
#include<stdio.h>

void fun(int i){
    
    printf("%d\n", i);
    if(i == 1) return;          // Base Case //
    fun(i-1);
}

int main()
{
    fun(5);
    
    return 0;
}
*/