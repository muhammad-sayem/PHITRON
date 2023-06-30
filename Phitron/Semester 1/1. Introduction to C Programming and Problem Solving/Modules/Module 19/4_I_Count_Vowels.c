#include<stdio.h>

int solve(char str[], int i){

    if(str[i] == '\0') return 0;
    
    int cnt = solve(str, i+1);

    if(str[i] >= 'A' && str[i] <= 'Z'){
        str[i] = str[i] +32;
    }

    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
        return cnt+1;
    }
    else{
        return cnt;
    }


}

int main()
{
    char str[205];
    gets(str);

    int res = solve(str, 0);
    printf("%d\n", res);
    
    return 0;
}



/*
#include<stdio.h>

int solve(char str[], int i){

    if(str[i] == '\0') return 0;
    
    int cnt = solve(str, i+1);
    
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
    str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            return cnt+1;
    }
    else {
        return cnt;
    }

}

int main()
{
    char str[205];
    gets(str);

    int res = solve(str, 0);
    printf("%d\n", res);
    
    return 0;
}
*/