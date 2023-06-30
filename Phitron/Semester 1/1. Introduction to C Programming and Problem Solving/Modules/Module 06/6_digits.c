#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);

    while(test--){
        int n;
        scanf("%d", &n);

        do{
            printf("%d ", n%10);
            n /= 10;
        }while(n!=0);

        printf("\n");
        
    }

    return 0;
}

/*
#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);

    while(test--){
        int n;
        scanf("%d", &n);

        if(n==0){
            printf("%d ", n);
        }
        while(n!=0){
            int rem = n%10;
            printf("%d ", rem);
            n /= 10;
        }
        printf("\n");
    }

    return 0;
}
*/