#include<stdio.h>
#include<string.h>

void fun(char s[]){
    printf("%d\n", strlen(s));
    // printf("%s\n", s);
}

int main()
{
    char str[20] = "Hello";
    fun(str);       /// string er khetre length pathanor dorkar hoy na ///
    
    return 0;
}