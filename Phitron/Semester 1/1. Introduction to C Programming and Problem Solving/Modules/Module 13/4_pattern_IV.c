#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int s = n-1;
    int k = 1;

    for(i=1; i<=(2*n)-1; i++){

        for(j=1; j<=s; j++){
            printf(" ");
        }

        for(j=1; j<=k; j++){
            printf("*");
        }

        /// line shesh ///
        printf("\n");
        if(i<=n-1){
            s--;
            k+=2;
        }
        else{
            s++;
            k-=2;
        }
    }

    return 0;
}

// OUTPUT //

/*
    *
   ***
  *****
   ***
    *
*/