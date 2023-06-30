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
        printf("\n");
        s--;
        k+=2;
    }
    
    return 0;
}


// ------------------------------------------------------------------------ //

// Previous code (submitted 08-10-2022) //

/*
#include<stdio.h>
int main()
{
    int row, col, n;
    scanf("%d", &n);

    for(row=1; row<=n; row++){
    // printing spaces //
        for(col=1; col<=n-row; col++){
            printf(" ");
        }
    // printing stars //
        for(col=1; col<=2*row-1; col++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/