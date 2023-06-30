#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int k = 1;

    for(i=1; i<=n; i++){
        for(j=1; j<=k; j++){
            printf("%d ", j);
        }
        printf("\n");
        k++;
    }
    
    return 0;
}

// OUTPUT //

/*
    1
    1 2 
    1 2 3 
    1 2 3 4
*/

// ---------------------------------------------------------------------- //

/*
#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int k = n;

    for(i=1; i<=n; i++){
        for(j=1; j<=k; j++){
            printf("%d ", j);
        }
        printf("\n");
        k--;
    }

    return 0;
}
*/

// OUTPUT //

/*
    1 2 3 4 
    1 2 3 
    1 2 
    1
*/