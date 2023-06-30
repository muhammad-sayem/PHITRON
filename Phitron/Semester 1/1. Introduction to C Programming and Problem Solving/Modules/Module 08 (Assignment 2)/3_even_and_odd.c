#include<stdio.h>
int main()
{
    int n, i, evenSum = 0, oddSum = 0;
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        int a;
        scanf("%d", &a);

        if(a%2 == 0) evenSum += a;
        else oddSum += a;
    }

    printf("%d %d\n", evenSum, oddSum);
    
    return 0;
}