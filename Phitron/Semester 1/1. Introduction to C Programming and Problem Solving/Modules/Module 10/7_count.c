#include<stdio.h>
int main()
{
    char str[1000001];
    scanf("%s", str);

    int i, sum = 0;

    for(i=0; str[i] != '\0'; i++){
        sum += str[i]-48;
    }

    printf("%d\n", sum);
    
    return 0;
}


// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[1000001];
//     scanf("%s", str);

//     int i, sum = 0;
//     int len = strlen(str);

//     for(i=0; i<len; i++){
//         sum += str[i]-48;
//     }

//     printf("%d\n", sum);
    
//     return 0;
// }