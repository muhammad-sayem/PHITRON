#include<stdio.h>
int main()
{
    int n, i, j, flag = 0;
    scanf("%d", &n);
    int a[n+5];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(a[i] + a[j] == x){
                flag = 1;
            }
        }
    }
    if(flag == 1) printf("YES\n");
    else printf("NO\n");
    
    return 0;
}