// NO RETURN TYPE + NO PARAMETER //

#include<stdio.h>

void sum(void){
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a+b;
    printf("%d\n", sum);
}

int main()
{
    /// 3 bar call dilam (joto khushi deya jay) /// 
    
    sum();
    sum();
    sum();
    
    return 0;
}