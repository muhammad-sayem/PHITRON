#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);

    while(test--){
        long long l, r, temp;
        scanf("%lld %lld", &l, &r);
        
        if(l>r){
            temp = l;
            l = r;
            r = temp;
        }

        long long val1 = r*(r+1)/2;
        long long val2 = ((l-1)*(l))/2;

        printf("%lld\n", val1-val2);
    }

    return 0;
}