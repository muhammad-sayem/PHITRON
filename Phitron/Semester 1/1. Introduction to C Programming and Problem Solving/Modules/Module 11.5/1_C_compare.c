#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);

    int ans = strcmp(a, b);

    if(ans < 0) printf("%s", a);
    else if(ans > 0) printf("%s", b);
    else printf("%s", a);
    
    return 0;
}