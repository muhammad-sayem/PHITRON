#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
    scanf("%s", str);
    int cnt[26] = {0};
    int i;

    for(i=0; i<strlen(str); i++){
        int val = str[i] - 'a';
        cnt[val]++;
    }

    for(i=0; i<26; i++){
        printf("%c - %d\n", i+'a', cnt[i]);
    }
    
    return 0;
}