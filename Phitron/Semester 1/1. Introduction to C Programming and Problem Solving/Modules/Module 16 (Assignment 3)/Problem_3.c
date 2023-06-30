// Write a function named count_before_zero() which receives an array of integers and the size of that array and counts the number of elements in that array until you find zero and returns that count. Call that function in the main function and print the count there. //

#include<stdio.h>

int count_before_zero(int ar[], int sz){
    int i;
    int cnt = 0;
    for(i=0; i<sz; i++){
        scanf("%d", &ar[i]);
        if(ar[i] != 0) {
            cnt++;
        }
        else {
            break;
        }
    }

    return cnt;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n+5];

    int ans = count_before_zero(a, n);
    printf("%d\n", ans);
    
    return 0;
}