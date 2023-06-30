// Without using library functions //

#include<stdio.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int i = 0;

    while(1){
        if(a[i] == '\0' && b[i] == '\0'){
            printf("Same\n");
            break;
        }
        else if(a[i] == '\0'){
            printf("A is lexicographically smaller\n");
            break;
        }
        else if(b[i] == '\0'){
            printf("B is lexicographically smaller\n");
            break;
        }
        
        if(a[i] == b[i]){
            i++;
        }
        else if(a[i] < b[i]){
            printf("A is lexicographically smaller\n");
            break;
        }
        else{
            printf("B is lexicographically smaller\n");
            break;
        }

    }
    
    return 0;
}


// Using strcmp function //
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    
    int val = strcmp(a,b);

    if(val < 0) printf("A is lexicographically smaller\n");
    else if(val > 0) printf("B is lexicographically smaller\n");
    else printf("SAME\n");
    
    return 0;
}
*/

// ------------------------------------------------------------------ //

/*
#include<stdio.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int i, flag = 0;

    for(i=0; a[i] != '\0' || b[i] != '\0'; i++){
        if(a[i] < b[i]){
            flag = 1;
            break;
        }
        else if(b[i] < a[i]){
            flag = 2;
            break;
        }
    }

    if(flag == 0) printf("Same\n");
    else if(flag == 1) printf("A is smaller\n");
    if(flag == 2) printf("B is smaller\n");
    
    return 0;
}
*/