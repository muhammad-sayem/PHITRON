#include<stdio.h>
int main()
{
    int n, i, j, k=1;
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=1; j<=k; j++){
            printf("*");
        }
        printf("\n");
        k++;
    }
    
    return 0;
}


// Anisul Islam's Logic //
/*
#include<stdio.h>
int main()
{
    int n, i, j, k=1;
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
*/


// OUTPUT //

/*
    *
    **
    ***
    ****
    *****
    ******
*/


// ------------------------------------------------------------------------//

/*
#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int k = n;

    for(i=1; i<=n; i++){
        for(j=k; j>=1; j--){
            printf("*");
        }
        printf("\n");
        k--;
    }
    
    return 0;
}
*/

// Anisul Islam's Logic //

/*
#include<stdio.h>
int main()
{
    int n, i, j, k=1;
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=n; j>=i; j--){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
*/

// OUTPUT //

/*
    *****
    ****
    ***
    **
    *
*/