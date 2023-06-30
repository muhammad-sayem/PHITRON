#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100], s2[100], s3[100], s4[100];
    scanf("%s", s1);
    scanf("%s", s2);

    // Copying s1 to s3 and copying s2 to s4 //

    strcpy(s3, s1);
    strcpy(s4, s2);

    // Calculating the length of  both strings //

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // Swapping first index's elements of both strings with each other // 

    char temp;

    temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;

    // Printing for getting output //

    printf("%d %d\n", len1, len2);
    printf("%s%s\n", s3, s4);
    printf("%s %s\n", s1, s2);

    return 0;
}

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[22], str2[11], str3[11];
    gets(str1);
    gets(str2);

    strcpy(str3, str1);

    int i, temp;

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    strcat(str1, str2);

    temp = str2[0];
    str2[0] = str3[0];
    str3[0] = temp;

    printf("%d %d\n", len1, len2);
    printf("%s\n", str1);
    printf("%s %s\n", str3, str2);

    return 0;
}
*/