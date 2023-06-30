// Without using library function //
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[200], b[100];
    scanf("%s %s", a, b);
    int i;
    int k = strlen(a);

    for(i=0; i<=strlen(b); i++){
        a[k] = b[i];
        k++;
    }

    printf("%s", a);

    return 0;
}
*/

// ------------------------------------------------------------- //

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[200], b[100];
    scanf("%s %s", a, b);
    int i;

    int lenA = strlen(a);
    int lenB = strlen(b);

    for(i=0; i<=lenB; i++){
        a[lenA+i] = b[i];
    }

    printf("%s", a);

    return 0;
}
*/

// By using strcat library function //

#include<stdio.h>
#include<string.h>
int main()
{
    char a[200], b[100];
    scanf("%s %s", a, b);
    
    strcat(a,b);

    printf("%s", a);

    return 0;
}