#include<stdio.h>
#include<limits.h>
int main()
{
    int n, i, cnt = 0;
    scanf("%d", &n);
    int a[n+5];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int min = INT_MAX;

    for(i=0; i<n; i++){
        if(a[i] < min) min = a[i];
    }

    for(i=0; i<n; i++){
        if(a[i] == min) cnt++;
    }

    if(cnt%2 != 0) printf("Lucky\n");
    else printf("Unlucky\n");

    return 0;
}