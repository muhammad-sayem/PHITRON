#include<stdio.h>
int main()
{
    int n, i, cnt = 0;
    scanf("%d", &n);
    int a[n+5];
    
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    int x;
    scanf("%d", &x);

    for(i=0; i<n; i++){
        if(a[i] == x) cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}