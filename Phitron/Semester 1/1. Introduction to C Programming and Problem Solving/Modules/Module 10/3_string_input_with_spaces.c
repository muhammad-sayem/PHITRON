#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    // gets(str);
    fgets(str, 20, stdin);
    printf("%s\n", str);
    
    return 0;
}