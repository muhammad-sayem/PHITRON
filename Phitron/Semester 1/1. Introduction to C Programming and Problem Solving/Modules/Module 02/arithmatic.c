#include<stdio.h>
int main()
{
    int a = 3, b = 20;
    int sum = a+b;
    int sub = a-b;
    int mult = a*b;
    float div = (float)b/a;
    int mod = b%a;
 
    printf("%d\n", sum);
    printf("%d\n", sub);
    printf("%d\n", mult);
    printf("%f\n", div);
    printf("%d\n", mod);

    return 0;
}