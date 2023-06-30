#include<stdio.h>

int fun(char str[], int i){
    if(str[i] == '\0') return 0;        // jehetu eta int type er function tai shudhu return dile hobe na......return 0; dite hobe //
    
    int l = fun(str, i+1);
    return l+1;
}

int main()
{
    char str[] = "hello";
    int len = fun(str, 0);      // 0 holo i er je value pathano hocche seta //

    printf("%d\n", len);
    
    return 0;
}