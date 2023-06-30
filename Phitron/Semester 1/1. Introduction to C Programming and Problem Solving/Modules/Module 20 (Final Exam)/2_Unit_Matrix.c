#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int a[n][n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 0;

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j){
                if(a[i][j] != 1){
                    flag = 1;
                    break;
                }
            }
            else{
                if(a[i][j] != 0){
                    flag = 1;
                    break;
            }
            }
        }
    }

    if(flag == 1) printf("NO\n");
    else printf("YES\n");
    
    return 0;
}