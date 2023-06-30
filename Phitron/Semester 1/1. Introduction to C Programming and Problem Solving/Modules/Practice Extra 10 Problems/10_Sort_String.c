#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    getchar();
    int a[30] = {0};

    while(n--){
        char ch;
        scanf("%c", &ch);

        int val = ch - 97;
        a[val]++;
    }

    for(i=0; i<26; i++){
        int temp = a[i];
        for(j=0; j<temp; j++){
            printf("%c", i+97);
        }
    }
    
    return 0;
}