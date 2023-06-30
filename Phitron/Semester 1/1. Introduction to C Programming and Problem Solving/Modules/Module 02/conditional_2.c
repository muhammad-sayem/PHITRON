#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if(tk >= 100){
        printf("I will eat Burger\n");
    }
    else if(tk >= 50){
        printf("I will eat Ice cream\n");
    }
    else if(tk >= 20){
        printf("I will eat Chips\n");
    }
    else{
        printf("I will eat nothing\n");
    }
    
    return 0;
}