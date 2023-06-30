#include<stdio.h>

void fun(){
    printf("Fun\n");        
    fun();              
}

int main()
{
    fun();
    
    return 0;
}

/*
    => Ekhane infinity time print hotei thakbe jotokkhon stack overflow na hoy.
    => Er pore program crash kore bondho hoye jabe.
    => Ekhane bar bar ek e fun function call hocche na.
    => rokket bar call howar sathe sathe same function er copy toiri hoye hoye print hocche.
*/