#include<stdio.h>
int main()
{
    int n, i, j, k, temp;
    scanf("%d", &n);
    int a[n+5];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++){
        if(a[i] == 0){
            for(j=0, k = i-1; j<(i-1)/2, k>=i/2; j++, k--){
                temp = a[j];
                a[j] = a[k];
                a[k] = temp;
            }
        }   
    }

    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}