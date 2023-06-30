#include<stdio.h>
int main()              /// code idea from  متهيألي دي أسهل : ///
{
    int n, k, i, min = 1e9, cnt = 0;
    scanf("%d %d", &n, &k);

    for(i=1; i<=n; i++){
        int x;
        scanf("%d", &x);
        if(x < min) min = x;
        cnt++;

        if(cnt == k || i == n){
            printf("%d ", min);
            cnt = 0;
            min = 1e9;
        }
    }

    return 0;
}