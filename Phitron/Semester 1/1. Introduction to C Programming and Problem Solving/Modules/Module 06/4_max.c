#include<stdio.h>
int main()
{
    int n, max = 0;
    scanf("%d", &n);

    while(n--){
        int x;
        scanf("%d", &x);
        if(x > max) max = x;
    }

    printf("%d\n", max);

    return 0;
}