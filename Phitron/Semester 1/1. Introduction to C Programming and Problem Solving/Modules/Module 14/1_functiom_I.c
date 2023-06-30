/// RETURN TYPE + PARAMETER ///

#include<stdio.h>

int sum(int x, int y){          // x = 10, y = 20 //
    int sum = x+y;
    return sum;
}

int main()
{

    // User theke input niye //
    int x, y;
    scanf("%d %d", &x, &y);
    int s = sum(x, y);
    printf("%d\n", s);

    // printf("%d\n", sum(x,y));      // evabe direct o print kora jay //


    // directly value pathiye //

    // int s = sum(10, 20);
    // printf("%d\n", s);

    // printf("%d\n", sum(10, 20));         // evabeo direct call diye print kora jay //
    // printf("%d\n", sum(100, 500));
    // printf("%d\n", sum(200, 700));
    
    return 0;
}

// -------------------------------------------------------------------- //

// SYNTAX //

// return_type name(parameters){
//     code
//     return
// }
