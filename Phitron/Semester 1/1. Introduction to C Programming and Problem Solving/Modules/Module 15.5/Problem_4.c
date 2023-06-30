#include<stdio.h>

void change_it(int ar[], int sz){
    int i;
    for(i=0; i<sz; i++){
        scanf("%d", &ar[i]);
    }

    ar[sz-1] = 100;

    for(i=0; i<sz; i++){
        printf("%d ", ar[i]);
    }

}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n+5];

    change_it(a, n);
    
    return 0;
}