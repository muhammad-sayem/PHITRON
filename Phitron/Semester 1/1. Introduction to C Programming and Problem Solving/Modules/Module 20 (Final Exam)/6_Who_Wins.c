#include<stdio.h>
int main()
{
    int n, t = 0, p = 0;
    scanf("%d", &n);

    while(n--){
        int a, b;
        scanf("%d %d", &a, &b);

        if(a>b) t++;
        else if(a<b) p++;
    }

    if(t>p) printf("Tiger\n");
    else if(t<p) printf("Pathan\n");
    else printf("Draw\n");
    
    return 0;
}