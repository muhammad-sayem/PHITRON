#include<stdio.h>
int main()
{
    int n, i, j, temp;
    scanf("%d", &n);
    int a[n+5];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }   
        }
    }

    if(n%2 != 0) printf("%d\n", a[n/2]);
    else printf("%d %d\n", a[n/2-1], a[n/2]);

    return 0;
}