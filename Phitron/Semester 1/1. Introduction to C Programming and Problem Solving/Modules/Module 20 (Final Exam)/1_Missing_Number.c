#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);

    while(test--){
        long long s, a, b, c;
        scanf("%lld %lld %lld %lld", &s, &a, &b, &c);
        
        printf("%lld\n", s-(a+b+c));

    }
    
    return 0;
}