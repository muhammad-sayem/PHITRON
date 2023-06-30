#include<stdio.h>

void simplePrint(int num){
    int i;
    for(i=1; i<num; i++){
        printf("%d ", i);
    }
    printf("%d", num);
}

int main()
{
    int n;
    scanf("%d", &n);

    simplePrint(n);
    
    return 0;
}

// ------------------------------------------------------------- //

// Previous code (submitted: 20-11-2022) //

/*
#include<stdio.h>

void print(int n);

int main()
{
    int n;
    scanf("%d", &n);
    print(n);

    return 0;
}

void print(int n){

    int i;
    for(i=1; i<=n; i++){
        printf("%d", i);
            if(i<n) printf(" ");
    }
}

*/