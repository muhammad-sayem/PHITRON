#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);

    while(test--){

        int n, i, even = 0, odd = 0;
        scanf("%d", &n);
        int a[n+5];

        for(i=0; i<n; i++){
            scanf("%d", &a[i]);
            if(a[i]%2 == 0) even++;
            else odd++;
        }

        if(n%2 != 0 || n == 1) printf("-1\n");
        else if(even == odd) printf("0\n");
        else{
            if(even > odd) printf("%d\n", (n/2)-odd);
            else printf("%d\n", (n/2)-even);
        }
    }
    
    return 0;
}

// ------------------------------------------------------------- //

/*

//  asif_abdullah's code // 

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;   
        scanf("%d", &n);
        int a[n+1];
    
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if(a[i]%2==0) even++;
            else odd++;
        }

        int ans = abs(even-odd);

                    
        if(n%2!=0) printf("-1\n");
        else printf("%d\n",ans/2);
    }

    return 0;
}

*/