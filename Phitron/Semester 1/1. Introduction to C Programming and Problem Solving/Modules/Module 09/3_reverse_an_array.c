// USING FOR LOOP //

#include<stdio.h>
int main()
{
    int n, i, j, temp;
    scanf("%d", &n);
    int a[n+5];
    
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(i=0, j=n-1; i<(n/2)-1, j>=n/2; i++, j--){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    
    return 0;
}


// USING WHILE LOOP //
/*
#include<stdio.h>
int main()
{
    int n, i, j, temp;
    scanf("%d", &n);
    int a[n+5];
    
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    i=0, j=n-1;

    while(i<j){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    
    return 0;
}
*/