#include<stdio.h>
int main()
{
    long long n, i, sum = 0;
    scanf("%lld", &n);
    long long a[n+5];

    for(i=0; i<n; i++){
        scanf("%lld", &a[i]);
    }
    
    for(i=0; i<n; i++){
        sum += a[i];
    }

    if(sum >= 0) printf("%lld\n", sum);
    else printf("%lld\n", -(sum));
    
    return 0;
}