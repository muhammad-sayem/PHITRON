#include<stdio.h>
int main()
{
    int n, i, j, temp, cnt = 0;
    scanf("%d", &n);
    int a[n+5];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++){
        int flag = 0;
        for(j=0; j<n; j++){
            if(a[j] == a[i]+1) {
                flag++;
                if(flag == 1) cnt++;
            }
        }
    }

    printf("%d\n", cnt);

    return 0;
}