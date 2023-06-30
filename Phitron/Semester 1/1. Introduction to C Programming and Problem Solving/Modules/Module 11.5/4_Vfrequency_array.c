#include<stdio.h>
int main()
{
    int n, m, i;
    scanf("%d %d", &n, &m);
    int a[n+5];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int cnt[100000] = {0};

    for(i=0; i<n; i++){
        cnt[a[i]]++;
    }

    for(i=1; i<=m; i++){
        printf("%d\n", cnt[i]);
    }
    
    return 0;
}