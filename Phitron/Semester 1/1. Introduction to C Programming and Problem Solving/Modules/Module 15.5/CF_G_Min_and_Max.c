#include<stdio.h>

void minMax(int a[], int size){
    
    int i;
    for(i=0; i<size; i++){
        scanf("%d", &a[i]);
    }

    int min = a[0];
    int max = a[0];

    for(i=1; i<size; i++){
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
    }

    printf("%d %d\n", min, max);

}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n+5];

    minMax(a, n);
    
    return 0;
}

// -------------------------------------------------------------------- //
/*
#include<stdio.h>

void minMax(int num){
    int i;
    int a[num+5];

    for(i=0; i<num; i++){
        scanf("%d", &a[i]);
    }

    int min = a[0];
    int max = a[0];

    for(i=1; i<num; i++){
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
    }

    printf("%d %d\n", min, max);

}

int main()
{
    int n;
    scanf("%d", &n);

    minMax(n);
    
    return 0;
}
*/

// ----------------------------------------------------------------------- //

// Prevoious code (submitted: 24-11-2022) //

/*
#include<stdio.h>

void min_max(int a[]){
        int n;
        scanf("%d", &n);
        int min, max, i;

        for(i=0; i<n; i++){
            scanf("%d", &a[i]);
        }

        min = max = a[0];

        for(i=1; i<n; i++){
            if(a[i]>max) max = a[i];
            if(a[i]<min) min = a[i];
        }

        printf("%d %d\n", min, max);

}

int main()
{
    int a[100000];

    min_max(a);

    return 0;
    
}
*/