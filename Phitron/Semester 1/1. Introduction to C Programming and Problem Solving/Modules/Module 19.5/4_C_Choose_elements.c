#include<stdio.h>
int main()
{
     int n,k;
     scanf("%d%d",&n,&k);
     int a[n+5];
     for(int i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }

     for(int i=0;i<n-1;i++)
     {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])  //Reverse Sort
            {
                int tm=a[i];
                a[i]=a[j];
                a[j]=tm;
            }
        }
     }

     long long sum=0;
     for(int i=0;i<k;i++)
     {
        if(a[i]<0)break;  //we can collect sum of at most k element. That mean's if we want then we can take less then k element if we need.
        sum+=a[i];
     }
     printf("%lld\n",sum);
    return 0;
}