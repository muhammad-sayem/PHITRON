#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);      
    int a[n];
    
    // taking inputs from user //

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    // sum //

    for(i=0; i<n; i++){
        sum += a[i];
    }

    // printing the result //

    printf("%d", sum);
    
    return 0;
}