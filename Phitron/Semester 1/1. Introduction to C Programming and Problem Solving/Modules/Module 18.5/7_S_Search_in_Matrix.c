#include<stdio.h>
int main()
{
    int n, m, i, j, flag = 0;
    scanf("%d %d", &n, &m);
    int a[n][m];

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(a[i][j] == x){
                flag = 1;
                break;
            }
        }
    }

    if(flag == 1) printf("will not take number\n");
    else printf("will take number\n");

    return 0;
}