#include<stdio.h>
#include<stdlib.h>

int my_abs(int num){
    return abs(num);
}

int main()
{
    int n;
    scanf("%d", &n);

    int ans = my_abs(n);
    printf("%d\n", ans);
    
    return 0;
}
 
 // ---------------------------------------------------------------- //


/*
#include<stdio.h>
#include<stdlib.h>

int my_abs(int num){
    if(num<0){
        return num*(-1); 
    }
    else return num;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", my_abs(n));
    
    return 0;
}
*/