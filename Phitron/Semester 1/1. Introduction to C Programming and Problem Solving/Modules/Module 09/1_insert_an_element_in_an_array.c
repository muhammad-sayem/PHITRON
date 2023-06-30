#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n+5];
    
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int pos, val;
    scanf("%d %d",&pos, &val);

    for(i=n; i>=pos+1; i--){
        a[i] = a[i-1];
    }

    a[pos] = val;

    for(i=0; i<=n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}