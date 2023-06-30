#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);

    while(test--){
        int w, h;
        scanf("%d %d", &w, &h);

        if(w == h) printf("Square\n");
        else printf("Rectangle\n");
    }
    
    return 0;
}