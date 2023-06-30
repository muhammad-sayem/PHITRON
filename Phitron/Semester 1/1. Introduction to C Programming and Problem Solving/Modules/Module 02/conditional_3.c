#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 5000){
        printf("We will go to Cox's Bazar\n");
            
            if(tk >= 10000){
                printf("We will go to Saint Martin's Island\n");
            }
            else{
                printf("We will back to Dhaka\n");
            }
    }
    else{
        printf("We will not go anywhere\n");
    }
    
    
    return 0;
}