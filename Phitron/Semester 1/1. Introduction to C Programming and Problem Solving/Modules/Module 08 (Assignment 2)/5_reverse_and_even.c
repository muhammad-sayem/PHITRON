#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n+5];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    for(i=n-1; i>=0; i--){
        if(i%2 == 0) printf("%d ", a[i]);
    }
    return 0;
}