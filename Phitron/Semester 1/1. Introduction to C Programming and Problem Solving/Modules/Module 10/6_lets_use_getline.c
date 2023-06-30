#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000001];
    gets(str);
    int i;

    for(i=0; str[i] != '\\'; i++){
        printf("%c", str[i]);
    }

    return 0;
}

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000001];
    gets(str);
    int i;

    for(i=0; str[i] != '\0'; i++){
        if(str[i] == '\\') break;
        else printf("%c", str[i]);
    }

    return 0;
}
*/