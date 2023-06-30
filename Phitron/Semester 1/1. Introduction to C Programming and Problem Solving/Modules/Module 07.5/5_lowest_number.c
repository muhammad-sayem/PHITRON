#include<stdio.h>
#include<limits.h>
int main()
{

    int n, i, min, index;
    scanf("%d", &n);
    int a[n+10];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    min = a[0];

    for(i=1; i<n; i++){
        if(a[i]<min){
            min = a[i];
            index = i;
        }
    }

    printf("%d %d\n", min, index+1);
    
    return 0;
}