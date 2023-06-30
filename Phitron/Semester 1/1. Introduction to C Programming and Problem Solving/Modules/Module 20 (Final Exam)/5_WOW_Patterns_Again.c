#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);

    int s = n-1;
    int k = 1;

    for(i=1; i<=n; i++){
        for(j=1; j<=s; j++){
            printf(" ");
        }
        if(i%2 != 0){
            for(j=1; j<=k; j++){
                printf("^");
            }
        }
        else{
            for(j=1; j<=k; j++){
                printf("*");
            }
        }
        printf("\n");
        s--;
        k+=2;
    }
    
    return 0;
}