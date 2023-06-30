#include<stdio.h>
int main()
{
    // Taking size of first array //

    int n, i, j;
    scanf("%d", &n);
    int a[n];

    // Taking first array's inputs from user //

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    // Taking size of second array //

    int m;
    scanf("%d", &m);
    int b[m];

    // Taking first array's inputs from user //

    for(i=0; i<m; i++){
        scanf("%d", &b[i]);
    }

    // Declaring array for result //

    int ans[n+m+5];

    // Copying first array's elements to the answer array //

    for(i=0; i<n; i++){
        ans[i] = a[i];
    }

    // Copying second array's elements to the answer array //
    
    for(i=n,j=0; j<m; i++,j++){
        ans[i] = b[j];
    }

    // Printing the final array after copying //

    for(i=0; i<n+m; i++){
        printf("%d ", ans[i]);
    }


    return 0;
}