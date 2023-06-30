#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int i;
    int cnt[26] = {0};

    for(i=0; i<strlen(s);i++){
        
        int val = s[i] - 'a';
        cnt[val]++;

        // cnt[s[i]-'a']++;
    }

    for(i=0; i<26; i++){
        if(cnt[i] != 0){
            printf("%c - %d\n", i+'a', cnt[i]);
        }
    }
    
    return 0;
}


// ------------------------------------------------------------------ //

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int i;
    int cnt[26] = {0};

    for(i=0; i<strlen(s);i++){
        
        int val = s[i] - 'a';
        cnt[val]++;

        // cnt[s[i]-'a']++;
    }

    for(i=0; i<strlen(s); i++){
        int val = s[i] - 'a';

        if(cnt[val] != 0){
            printf("%c - %d\n", val+'a', cnt[val]);
        }
        cnt[val] = 0;
    }
    
    return 0;
}
*/