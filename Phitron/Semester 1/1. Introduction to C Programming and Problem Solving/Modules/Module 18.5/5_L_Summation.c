#include<stdio.h>

long long sum(long long a[], long long n, long long i){
    if(i == n) return 0;
    long long s = sum(a, n, i+1);
    return s+a[i];
    
}

int main()
{
    long long n, i;
    scanf("%lld", &n);
    long long a[n+5];

    for(i=0; i<n; i++){
        scanf("%lld", &a[i]);
    }

    long long summation = sum(a, n, 0);
    printf("%lld\n", summation);
    
    return 0;
}