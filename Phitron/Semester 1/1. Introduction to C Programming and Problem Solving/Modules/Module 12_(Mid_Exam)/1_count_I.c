#include<stdio.h>
int main()
{
    int n, i, even = 0, odd = 0;
    scanf("%d", &n);
    int a[n+5];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        if(a[i]%2 == 0) even++;
        else odd++;
    }

    printf("%d %d\n", even, odd);

    return 0;
}