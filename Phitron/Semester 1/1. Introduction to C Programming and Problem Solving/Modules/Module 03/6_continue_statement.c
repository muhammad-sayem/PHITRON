#include<stdio.h>
int main()
{
    int i;

    // It will print from 1 to 10 except 5 //

    for(i=1; i<=10; i++){
        if(i == 5){
            continue;
        }
        printf("%d\n", i);
    }

   // It will print from 1 to 10 //

    /*
   for(i=1; i<=10; i++){
        printf("%d\n", i);
            if(i == 5){
                continue;
            }
    }
    */

    return 0;
}