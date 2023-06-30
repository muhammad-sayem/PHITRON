#include<stdio.h>
int main()
{
    long long n, i, cnt;
    scanf("%lld", &n);
    long long a[n+5];

    for(i=0; i<n; i++){
        scanf("%lld", &a[i]);
    }
    long long ans = -1e18;
    
    for(i=0; i<n; i++){
        
        if(a[i] %2 == 0){
            cnt = 0;
            while(a[i]%2 == 0){
                cnt++;
                a[i] /= 2;
            }
        }
        if(cnt > ans) ans = cnt;
    }

    printf("%lld", ans);
    
    return 0;
}

// ----------------------------------------------------------- //

/*

#include<stdio.h>

long long counting(long long x){
    
    long long cnt = 0;
    while(x%2 == 0){
        cnt++;
        x /= 2;
    }
    return cnt;
}

int main()
{
    long long n, i, cnt, val;
    scanf("%lld", &n);
    long long a[n+5];

    for(i=0; i<n; i++){
        scanf("%lld", &a[i]);
    }
    long long ans = -1e18;
    
    for(i=0; i<n; i++){
        if(a[i] %2 == 0){
            val = counting(a[i]);
        }
        if(val > ans) ans = val;
    }

    printf("%lld", ans);
    
    return 0;
}

*/