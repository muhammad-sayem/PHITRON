#include<stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};      // eivabe initialize korle size dileo hoy abar na dileo hoy //
                                          // jodi size declare korar pore tar theke kom value initialize kora hoy tahole jegula baki thake oigula 0 print kore //
    for(int i=0; i<5; i++){
        printf("%d ", a[i]);
    }

    return 0;
}

/* jodi kokhono pura array er shob value 0 (zero) korte 
 hoy tahole just a[n] = {0} dilei kaj hoye jay */