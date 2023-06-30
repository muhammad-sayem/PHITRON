#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if(n >= 10000){
        printf("Gucci Bag\n");
            if(n > 20000){
                printf("Gucci Belt\n");
            }
    }
    else if(n >= 5000){
        printf("Levis Bag\n");
    }
    else{
        printf("Something\n");
    }

    return 0;
}