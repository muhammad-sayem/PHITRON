// NO RETURN TYPE + PARAMETER // 

#include<stdio.h>

void sum(int a, int b){
    int s = a+b;
    printf("%d\n", s);

    // printf("%d\n", a+b);         /// evabeo direct print kora jay ///
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    
    return 0;
}