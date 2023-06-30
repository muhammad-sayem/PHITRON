#include<stdio.h>
long long solve(long long n, long long i){
    if(i == n+1) return 1;
    long long res = solve(n, i+1);
    return res*i;
}

int main()
{
    long long n;
    scanf("%lld", &n);

    long long val = solve(n, 1);
    printf("%lld\n", val);    
    return 0;
}



// With Pathan vai's Concept //

/*
#include<stdio.h>

long long solve(long long n){
    if(n == 0) return 1;
    long long res = solve(n-1);
    return res*n;
}

int main()
{
    long long n;
    scanf("%lld", &n);

    long long ans = solve(n);
    printf("%lld\n", ans);
    
    return 0;
}
*/

