#include<stdio.h>
int main()
{
    int i = 10;
    
    // int x = i++;         /// age valure x er moddhe assign hobe then i er maan barbe ///
    // printf("x = %d and i = %d\n", x, i);

    int x = ++i;            /// age valure x er moddhe assign hobe then i er maan barbe ///
    printf("x = %d and i = %d\n", x, i);
    
    return 0;
}