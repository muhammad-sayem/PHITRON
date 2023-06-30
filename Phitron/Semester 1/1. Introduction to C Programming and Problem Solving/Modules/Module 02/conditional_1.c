#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if(tk >= 100){
        printf("I will eat burger\n");
    }
    else{
        printf("I will not eat burger\n");
    }
    
    // This condition is only for tk == 100 //

    // if(tk == 100){
    //     printf("I will eat burger\n");
    // }
    // else{
    //     printf("I will not eat burger\n");
    // }

    return 0;
}