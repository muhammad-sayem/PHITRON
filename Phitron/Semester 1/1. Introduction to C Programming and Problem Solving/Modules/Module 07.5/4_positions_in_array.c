#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n+5];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        if(a[i]<=10) printf("A[%d] = %d\n", i, a[i]);
    }
    
    return 0;
}