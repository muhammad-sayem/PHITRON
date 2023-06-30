#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int s = n-1;
    int k = 1; 

    for(i=1; i<=2*n; i++){
        for(j=1; j<=s; j++){
            printf(" ");
        }
        for(j=1; j<=k; j++){
            printf("*");
        }
        printf("\n");
        if(i<n){
            s--;
            k+=2;
        }
        else if(i == n){
            s = s;
            k = k;
        }
        else{
            s++;
            k-=2;        
        }
    }
    
    return 0;
}

// ------------------------------------------------------ //

// previous code (submitted 08-10-2022) //

/*
#include<stdio.h>
int main()
{
    int row, col, n;
    scanf("%d", &n);

    for(row=1; row<=n; row++){

        for(col=1; col<=n-row; col++){
            printf(" ");
        }

        for(col=1; col<=2*row-1; col++){
            printf("*");
        }
        printf("\n");
    }


    for(row=n; row>=1; row--){

        for(col=1; col<=n-row; col++){
            printf(" ");
        }

        for(col=1; col<=2*row-1; col++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/