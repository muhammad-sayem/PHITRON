#include<stdio.h>
int main()
{
    int n, k, i;
    scanf("%d %d", &n, &k);

    while(k--){
        for(i=1; i<=n; i++){
            printf("%d ", i);
        }
        printf("\n");
    }
    
    return 0;
}