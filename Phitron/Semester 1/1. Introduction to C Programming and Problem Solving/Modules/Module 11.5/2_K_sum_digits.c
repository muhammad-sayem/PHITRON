#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    char str[1000001];
    scanf("%s", str);

    for(i=0; i<n; i++){
        sum += str[i]-48;
    }

    printf("%d\n", sum);
    
    return 0;
}