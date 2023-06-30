// RETURN TYPE + PARAMETER //

// #include<stdio.h>

// int char_to_ascii(char ch){
//     int val = ch;
//     return val;
// }

// int main()
// {
//     char ch;
//     scanf("%c", &ch);
    
//     int res = char_to_ascii(ch);
//     printf("%d\n", res);
    
//     return 0;
// }

/// ------------------------------------------------------------------- ///

// RETURN TYPE + NO PARAMETER //
/*
#include<stdio.h>

int char_to_ascii(){

    char ch;
    scanf("%c", &ch);
    
    int val = ch;
    return val;
}

int main()
{
    int res = char_to_ascii();
    printf("%d\n", res);
    
    return 0;
}
*/

/// ---------------------------------------------------------------------- ///
/*
// NO RETURN TYPE + PARAMETER //

#include<stdio.h>

void char_to_ascii(char ch){
    int val = ch;
    printf("%d\n", val);

    //printf("%d\n", ch);           /// evabeo direct print kora jay ///
}

int main()
{
    char ch;
    scanf("%c", &ch);
    
    char_to_ascii(ch);
    
    return 0;
}
*/

/// ---------------------------------------------------------------- ///

// NO PARAMETER + NO RETURN TYPE ///
/*
#include<stdio.h>

void char_to_ascii(void){
    char ch;
    scanf("%c", &ch);
    printf("%d\n", ch);
}

int main()
{
    char_to_ascii();
    
    return 0;
}
*/