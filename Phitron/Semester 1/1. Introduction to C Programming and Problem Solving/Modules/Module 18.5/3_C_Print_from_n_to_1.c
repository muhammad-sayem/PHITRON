#include<stdio.h>

void from_n_to_1(int i){
    printf("%d ", i);
    if(i == 2) return;
    from_n_to_1(i-1);
}

int main()
{
    int n;
    scanf("%d", &n);

    from_n_to_1(n);
    printf("1\n");
    
    return 0;
}


/*
#include<stdio.h>

void from_n_to_1(int i){
    printf("%d", i);
    if(i>1) printf(" ");
    if(i == 1) return;
    from_n_to_1(i-1);
}

int main()
{
    int n;
    scanf("%d", &n);

    from_n_to_1(n);
    
    return 0;
}
*/