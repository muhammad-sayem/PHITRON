// Write a C program to take positive integer N as input and print a pattern shown in the sample input output. //

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
            printf("%d", k);
        }
        printf("\n");
        s--;
        k++;
    }
    
    return 0;
}