
#include<stdio.h>

void print(int sz, int i){
    printf("I love Recursion\n");
    if(i == sz) return;
    print(sz, i+1);
}

int main()
{
    int n;
    scanf("%d", &n);

    print(n, 1);
    
    return 0;
}

/*
#include<stdio.h>

void print(int n, int i){
    if(i == n+1) return;
    printf("I love Recursion\n");
    print(n, i+1);
}

int main()
{
    int n;
    scanf("%d", &n);

    print(n, 1);
    
    return 0;
}
*/


// asif_abdullah's code //

/*
#include<stdio.h>

void print_it(int n)
{
    if(n==0) return;
    printf("I love Recursion\n");
    print_it(n-1);
   
}

int main()
{
    int n;
    scanf("%d",&n);
    print_it(n);
    
    return 0;
}
*/