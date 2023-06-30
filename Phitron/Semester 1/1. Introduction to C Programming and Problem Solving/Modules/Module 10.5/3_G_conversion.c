// USING FOR LOOP //

#include<stdio.h>
int main()
{
    char str[100000];
    scanf("%s", str);
    int i;

    for(i=0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z') str[i] = str[i]-32;
        else if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i]+32;
        else if(str[i] == ',') str[i] = ' ';
    }

    printf("%s\n", str);
    
    return 0;
}

// USING WHILE LOOP // 

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100000];
    gets(str);
    int i=0;

    while(str[i] != '\0'){
        if(str[i] >= 'a' && str[i] <= 'z') str[i] = str[i] - 32;
        else if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] + 32;
        else if(str[i] == ',') str[i] = ' ';
        i++;
    }

    printf("%s\n", str);

    return 0;
}
*/