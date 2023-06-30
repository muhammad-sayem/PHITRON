// RETURN TYPE + NO PARAMETER //

#include<stdio.h>

int sum(){
    int a, b;
    scanf("%d %d", &a, &b);
    int s = a+b;
    return s;
}

int main()
{
    int summation = sum();
    printf("%d\n", summation);

    //printf("%d\n", sum());          /// evabeo direct print kora jay ///
    
    return 0;
}

// ------------------------------------------------------------------- //

/*
    ==> Ei type er function er khetre parameter er jayga khali o rakha jay abar 
    sum(void) evabeo deya jay.

    ==> sum(void) evabe dile extra kono parameter dile seta error show korbe 
    ar jodi sum() eivabe faka rakha hoy taile extra parameter dile sheta ignore kore

    ==> sum(void) eivabe use kora beshi safe

*/