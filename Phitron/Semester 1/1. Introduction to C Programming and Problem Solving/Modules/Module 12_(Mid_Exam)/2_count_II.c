#include<stdio.h>
#include<string.h>
int main()
{
    char str[100000];
    scanf("%s", str);
    int i, cnt = 0;

    for(i=0; i<strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            cnt++;
        }
    }

    printf("%d\n", cnt);
    
    return 0;
}