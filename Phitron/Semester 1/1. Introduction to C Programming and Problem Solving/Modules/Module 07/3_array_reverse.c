#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);        // n diye array er size user er theke input neya hocche //
    int a[n];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(i=n-1; i>=0; i--){
        printf("%d ", a[i]);
    }
    
    return 0;
}