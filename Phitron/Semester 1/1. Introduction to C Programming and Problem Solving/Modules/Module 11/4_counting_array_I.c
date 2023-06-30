#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n+5];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int cnt[7] = {0};       // joto porjonto songkha gunte chai tar theke ek beshi nite hobe index e//

    for(i=0; i<n; i++){
        cnt[a[i]]++;

        // int val = a[i];
        // cnt[val]++;
    }

    for(i=0; i<=6; i++){
        printf("%d - %d\n", i, cnt[i]);
    }

    
    return 0;
}