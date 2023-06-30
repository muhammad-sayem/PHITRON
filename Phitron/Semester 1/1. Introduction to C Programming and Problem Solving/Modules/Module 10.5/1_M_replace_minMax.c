#include<stdio.h>
int main()
{
    int n, i, minIndex, maxIndex, temp;
    scanf("%d", &n);
    int a[n+5];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int min = a[0];
    int max = a[0];

    for(i=1; i<n; i++){
        if(a[i] < min){
            minIndex = i;
            min = a[i];
        }
        if(a[i] > max){
            maxIndex = i;
            max = a[i];
        }
    }

    // Swapping minimum value and maximum value position //

    temp = a[minIndex];
    a[minIndex] = a[maxIndex];
    a[maxIndex] = temp;

    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}