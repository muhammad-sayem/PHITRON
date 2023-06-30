#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int k = n;

    for(i=1; i<=n; i++){
        for(j=1; j<=k; j++){
            printf("*");
        }
        printf("\n");
        k--;
    }
    
    return 0;
}

// --------------------------------------------------------------- //

// previous code (submitted 08-10-2022)//

/*
#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);

    for(i=n; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/