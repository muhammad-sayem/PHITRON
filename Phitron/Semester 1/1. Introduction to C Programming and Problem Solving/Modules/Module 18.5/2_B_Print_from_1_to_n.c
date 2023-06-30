#include<stdio.h>

void from_1_to_n(int sz, int i){
    printf("%d\n", i);
    if(i == sz) return;
    from_1_to_n(sz, i+1);
}

int main()
{
    int n;
    scanf("%d", &n);

    from_1_to_n(n, 1);
    
    return 0;
}


// asif_abdullah's code //
/*
#include<stdio.h>

void print_it(int i)
{
    if(i==0) return;
    print_it(i-1); // here waiting
    printf("%d\n",i); //then reverse back and print 1 2 3 4 5
}

int main()
{
    int n;
    scanf("%d",&n);
    print_it(n);
    
    return 0;
}
*/