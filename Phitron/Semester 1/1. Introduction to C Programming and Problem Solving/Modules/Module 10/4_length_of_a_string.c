#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s", str);
    
    // without using built in function //

    // int len = 0, i;
    // for(i=0; str[i] != '\0'; i++){
    //     len++;
    // }

    // using built in function //

    int len = strlen(str);

    printf("%d\n", len);

    
    return 0;
}