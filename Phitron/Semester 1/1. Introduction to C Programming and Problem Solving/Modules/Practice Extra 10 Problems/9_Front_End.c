#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int a[n+5];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    i = 0;
    j = n-1;

    while(i<j){
        printf("%d %d ", a[i], a[j]);
        i++;
        j--;   
    }
    printf("%d", a[j]);

    return 0;
}