#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
    gets(str);
    int i, c = 0, s = 0, sp = 0;

    for(i=0; i<strlen(str); i++){
        if(str[i] >= 'a' && str[i] <= 'z') s++;
        else if(str[i] >= 'A' && str[i] <= 'Z') c++;
        if(str[i] == ' ') sp++;
    }

    printf("Capital - %d\n", c);
    printf("Small - %d\n", s);
    printf("Spaces - %d\n", sp);
    
    return 0;
}