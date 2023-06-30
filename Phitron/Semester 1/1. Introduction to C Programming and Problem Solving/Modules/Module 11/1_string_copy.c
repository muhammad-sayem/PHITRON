// By not using library function //

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    int i;
    scanf("%s %s", &a, &b);
    
    for(i=0; i<=strlen(b); i++){
        a[i] = b[i];
    }

    printf("%s %s\n", a, b);
    
    return 0;
}


// By using library function // 

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    int i;
    scanf("%s %s", &a, &b);
    
    strcpy(a,b);

    printf("%s %s\n", a, b);
    
    return 0;
}
*/