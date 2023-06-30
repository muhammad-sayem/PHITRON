#include<stdio.h>

int my_len(char s[]){
    int i, len = 0;

    for(i=0; s[i] != '\0'; i++){
        len++;
    }

    return len;
}

int main()
{
    char str[10000];
    scanf("%s", &str);

    int ans = my_len(str);
    printf("%d\n", ans);
    
    // printf("%d\n", my_len(str));

    return 0;
}