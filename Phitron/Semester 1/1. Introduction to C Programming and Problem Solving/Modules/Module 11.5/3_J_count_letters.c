#include<stdio.h>
#include<string.h>
int main()
{
    char str[100001];
    scanf("%s", str);
    char ch;
    int i;

    for(ch = 'a'; ch <='z'; ch++){
        int cnt = 0;
            for(i=0; i<strlen(str); i++){
                if(str[i] == ch) cnt++;
            }

            if(cnt > 0) printf("%c : %d\n", ch, cnt);
    }
    return 0;
}


// ---------------------------------------------------------------- //

// Rahat Khan Pathan vai's code //
/*
#include<stdio.h>
int main()
{
    char c;
    int cnt[26]={0};
    while(scanf("%c",&c) != EOF)
    {
        cnt[c-'a']++;
    }
    for(char i='a';i<='z';i++)
    {
        if(cnt[i-'a']>0)
        {
            printf("%c : %d\n",i,cnt[i-'a']);
        }
    }
    return 0;
}
*/

// -------------------------------------------------------------------- //

// Fazly-Fardin //
/*
#include<stdio.h>
#include<string.h>
int main(){
    char c;
    int count[26] = {0};
    while(scanf("%c",&c) != EOF){
        count[c-'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(count[i] > 0){
            printf("%c : %d\n",'a'+i,count[i]);
        }
    }
}
*/

// ----------------------------------------------------------- // 

// Idea from Asif Abdullah's code //

/*
#include<stdio.h>
int main()
{
    char ch;
    int cnt[26] = {0};
    while(scanf("%c", &ch) != EOF){
        int val = ch - 'a';
        cnt[val]++;
    }
    
    int i;

    for(i=0; i<26; i++){
        if(cnt[i] != 0){
            printf("%c : %d\n", i+'a', cnt[i]);
        }
    }
    
    return 0;
}
*/