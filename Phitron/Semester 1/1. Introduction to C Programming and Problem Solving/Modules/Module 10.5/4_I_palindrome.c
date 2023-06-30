#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000];
    scanf("%s", str1);
    char str2[1000];
    int i;
    int len = strlen(str1);
    char temp;

    // Copying the string to another string //

    for(i=0; i<len; i++){
        str2[i] = str1[i];
    }
    str2[len] = '\0';           // If we don't fix the last index of the second string with a null char, then it can give garbage value or wrong answer to the code //

    // Reversing the original string //

    for(i=0; i<len/2; i++){
        temp = str1[i];
        str1[i] = str1[len-1-i];
        str1[len-1-i] = temp;
    }

    // Comparing main string and the copied string //

    int flag = 0;

    for(i=0; str1[i] != '\0' || str2[i] != '\0'; i++){
        if(str1[i] != str2[i]){
            flag = 1;
            break;
        }
    }

    if(flag == 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}

// Asif Abdullah's Code //
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);

    int i=0,j=strlen(s)-1,f=0;

    while (i<j)
    {
        if(s[i] != s[j])
        {
            f=1;
            break;
        }
        i++;
        j--;
    }

    if(f==0) printf("YES\n");
    else printf("NO\n");
    
    return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000], str2[1000];
    gets(str1);

    int i = 0, len = 0;

    while(str1[i] != '\0'){
        len++;
        i++;
    }

    int j = 0;
    while(str1[j] != '\0'){
        str2[j] = str1[len-1-j];
        j++;
    }
    str2[j] = '\0';
    int result = strcmp(str1, str2);

    if(result == 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}
*/