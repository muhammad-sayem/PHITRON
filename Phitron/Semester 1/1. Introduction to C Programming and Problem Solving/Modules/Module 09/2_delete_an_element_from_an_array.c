#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n+5];
    
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int pos;
    scanf("%d", &pos);

    for(i=pos+1; i<n; i++){
        a[i-1] = a[i];
    }

    for(i=0; i<n-1; i++){
        printf("%d ", a[i]);
    }
    
    return 0;
}