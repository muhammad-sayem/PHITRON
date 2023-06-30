#include<stdio.h>
int main()
{
    int n, i, x, pos = -1;
    scanf("%d", &n);
    int a[n];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    for(i=0; i<n; i++){
        if(a[i] == x){
            pos = i;
            break;
        }
    }
    printf("%d\n", pos);

    return 0;
}


/*
#include<stdio.h>
int main()
{
    int n, i, x, temp, flag = 0, sum = 0;
    scanf("%d", &n);
    int a[n+5];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    for(i=0; i<n; i++){
        if(a[i] == x){
            temp = i;
            flag = 1;
            break;
        }
    }

    if(flag == 0) printf("-1\n");
    else printf("%d\n", temp);

    return 0;
}
*/
