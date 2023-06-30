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
        for(j=1; j<=k; j++){
            printf("*");
        }
        // Line shesh //
        printf("\n");
        s--;
        k+=2;
    }
    
    return 0;
}

// OUTPUT //

/*
       *   
      ***
     *****
    *******
*/

// ------------------------------------------------------------------ //

/*
#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);

    int s = 0;
    int k = (2*n)-1;        // k = n+n-1;

    for(i=1; i<=n; i++){
        for(j=1; j<=s; j++){
            printf(" ");
        }
        for(j=1; j<=k; j++){
            printf("*");
        }
        // Line shesh //
        printf("\n");
        s++;
        k-=2;
    }
    
    return 0;
}
*/

// OUTPUT //

/*
    *******
     *****
      ***
       *
*/