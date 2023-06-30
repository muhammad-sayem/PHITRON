#include<stdio.h>
int main()
{
    int n, i;
    long long int sum = 0;
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        sum += i;
    }
    printf("%lld", sum);

    return 0;
}