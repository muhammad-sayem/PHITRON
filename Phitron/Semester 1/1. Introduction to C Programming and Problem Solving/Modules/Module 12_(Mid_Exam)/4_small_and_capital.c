#include<stdio.h>
#include<string.h>
int main()
{
    char str[100000];
    scanf("%s", str);
    int i, small = 0, capital = 0;

    for(i=0; i<strlen(str); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            small++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            capital++;
        }
    }

    printf("%d %d\n", capital, small);

    return 0;
}