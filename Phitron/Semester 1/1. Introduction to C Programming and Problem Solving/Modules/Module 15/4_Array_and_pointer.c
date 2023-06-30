#include<stdio.h>
int main()
{
    int ar[5] = {10, 20, 30, 40, 50};

    // printf("0th inddex er address: %p\n", &ar[0]);       /// 0061FF0C
    // printf("array 'ar' er address: %p\n", a)r;           /// 0061FF0C

    // printf("0th inddex er value: %d\n", ar[0]); 
    // printf("0th inddex er value: %d\n", *ar); 

    /// Syntax ///

    // printf("1st index er value: %d\n", ar[1]);
    // printf("1st index er value: %d\n", *(ar+1));

    printf("%d\n", *(ar+1));
    printf("%d\n", *(1+ar));
    printf("%d\n", ar[1]);      /// *(ar+1) ///
    printf("%d\n", 1[ar]);      /// *(1+ar) ///
    
    return 0;
}

/*
    => Er mane holo 0-index er address je kotha, a print korao same kotha 
    => ar name ta holo ar[0] er address
    => ar jehetu ekta address rakhe tai bola jay ar ekta pointer
    => ar = &a[0] bola jay
*/