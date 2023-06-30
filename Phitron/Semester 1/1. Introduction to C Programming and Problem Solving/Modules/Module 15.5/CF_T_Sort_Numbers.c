#include<stdio.h>

void solve(){
    int a[3];
    int b[3];
    
    int i, j, temp;

    for(i=0; i<3; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<3; i++){
        b[i] = a[i];
    }

    for(i=0; i<2; i++){
        for(j=i+1; j<3; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(i=0; i<3; i++){
        printf("%d\n", a[i]);
    }

    printf("\n");

    for(i=0; i<3; i++){
        printf("%d\n", b[i]);
    }

}


int main()
{
    solve();
    
    return 0;
}

// --------------------------------------------------------------------- //

// Previous code (Submitted: 15-10-2022) //

/*
#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a,&b,&c);

    if(a<=b && a<=c){

        if(b<=c){
            printf("%d\n%d\n%d\n", a,b,c);
        }
        else{
            printf("%d\n%d\n%d\n", a,c,b);
        }
    }

    else if(b<=a && b<=c){

        if(a<=c){
            printf("%d\n%d\n%d\n", b,a,c);
        }
        else{
            printf("%d\n%d\n%d\n", b,c,a);
        }
    }

    else if(c<=a && c<=b){

        if(a<=b){
            printf("%d\n%d\n%d\n", c,a,b);
        }
        else{
            printf("%d\n%d\n%d\n", c,b,a);
        }
    }

    printf("\n%d\n%d\n%d\n", a, b, c);

    return 0;
}

*/