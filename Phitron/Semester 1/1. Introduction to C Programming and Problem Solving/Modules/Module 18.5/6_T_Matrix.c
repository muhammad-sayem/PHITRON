#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, j, sumP = 0, sumS = 0;
    scanf("%d", &n);
    int a[n][n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
            if(i == j) sumP += a[i][j];
            if(i+j == n-1) sumS += a[i][j];
        }
    }

    printf("%d\n", abs(sumP-sumS));

    return 0;
}


/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, j, sumP = 0, sumS = 0;
    scanf("%d", &n);
    int a[n][n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i == j) sumP += a[i][j];
            if(i+j == n-1) sumS += a[i][j];
        }
    }

    printf("%d\n", abs(sumP-sumS));

    return 0;
}
*/