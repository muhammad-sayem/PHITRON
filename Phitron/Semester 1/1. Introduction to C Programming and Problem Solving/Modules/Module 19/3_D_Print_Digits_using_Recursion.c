#include<stdio.h>

void solve(int n){
    int num = n;
    if(n==0) return;

    n = n%10;
    
    solve(num/10);
    printf("%d ", n);
    
}

int main()
{
    int test;
    scanf("%d", &test);

    while(test--){
        int n;
        scanf("%d", &n);

        solve(n);
        if(n == 0){
            printf("0");
        }

        printf("\n");

    }
    
    return 0;
}

// ------------------------------------------------------------------- //

/*
#include<stdio.h>
#include<string.h>

void solve(char str[], int i){
    if(str[i] == '\0') return;

    printf("%c ", str[i]);
    solve(str, ++i);
}

int main()
{
    int test;
    scanf("%d", &test);

    while(test--){
        char str[15];
        scanf("%s", str);

        solve(str, 0);

        printf("\n");

    }
    
    return 0;
}
*/

// ----------------------------------------------------------------------- //

// Rahat Khan Pathan vai's code //

/*
#include<stdio.h>

void solve(int n){
    if(n==0) return;

    int x = n%10;
    solve(n/10);
    printf("%d ", x);
    
}

int main()
{
    int test;
    scanf("%d", &test);

    while(test--){
        int n;
        scanf("%d", &n);

        solve(n);
        if(n == 0){
            printf("0");
        }

        printf("\n");

    }
    
    return 0;
}
*/