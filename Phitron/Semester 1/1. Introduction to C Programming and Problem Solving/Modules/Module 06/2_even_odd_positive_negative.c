#include<stdio.h>
int main()
{
    int n, even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d", &n);

    while(n--){
        int x;
        scanf("%d", &x);

        if(x>0) positive++;
        if(x<0) negative++;
        if(x%2==0) even++;
        if(x%2!=0) odd++;
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}