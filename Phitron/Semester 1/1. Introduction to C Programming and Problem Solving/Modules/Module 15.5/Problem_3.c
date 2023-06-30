#include<stdio.h>

int count_odd(int ar[], int sz){
    int i, cnt = 0;

    for(i=0; i<sz; i++){
        scanf("%d", &ar[i]);
        if(ar[i] %2 != 0) cnt++;
    }

    return cnt;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n+5];

    int ans = count_odd(a, n);
    printf("%d\n", ans);

    /// printf("%d\n", count_odd(a, n));
    
    return 0;
}