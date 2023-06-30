#include<stdio.h>
#include<limits.h>

int solve(int a[], int n, int i){
    if(i==n) return INT_MIN;
    
    int max = solve(a, n, i+1);

    if(a[i] > max) return a[i];
    else return max;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n+5];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int res = solve(a, n, 0);
    printf("%d\n", res);
    
    return 0;
}