#include<stdio.h>

int add(int x, int y){
    return x+y;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int ans = add(a, b);
    printf("%d\n", ans);
    
    return 0;
}

// ------------------------------------------------------------------ //

// Previous code (submitted: 19-11-2022)

/*
#include<stdio.h>

void add(int a, int b){
    int sum = a+b;
    printf("%d", sum);
}


int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    add(a, b);

    return 0;
}
*/