#include<stdio.h>
int main()
{
    int i;

    // It will print from 1 to 4 //
    for(i=1; i<=10; i++){
        if(i == 5){
            break;
        }
        printf("%d\n", i);
    }

   // It will print from 1 to 5 //

   /*
   for(i=1; i<=10; i++){
        printf("%d\n", i);
            if(i == 5){
                break;
            }
    }
    */
    return 0;
}