#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    n/=1000;                // jehetu shorto onujai input always 4 digits er hbe tai direct 1000 diye vag dile e first digit ber hoye jay //

    if(n%2 == 0) printf("EVEN\n");
    else printf("ODD\n");

    /*
    while(n>=10){
        n/=10;
    }

    if(n%2 == 0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    */

    
    return 0;
}