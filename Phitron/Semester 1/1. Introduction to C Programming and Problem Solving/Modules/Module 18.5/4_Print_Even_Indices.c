#include<stdio.h>

void evenIndices(int a[], int n, int i){
    if(i%2 == 0){
        printf("%d ", a[i]);
    }
    if(i == 0) return;
    evenIndices(a, n, i-1);

}

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n+5];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    evenIndices(a, n, n-1);
    
    return 0;
}

// asif_abdullah's code //
/*
#include<stdio.h>

void show_even(int a[],int n,int i)
{
    if(i==n) return;
    show_even(a,n,i+1);
    if(i%2==0) printf("%d ",a[i]);
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    show_even(a,n,0);
    
    
    return 0;
}
*/