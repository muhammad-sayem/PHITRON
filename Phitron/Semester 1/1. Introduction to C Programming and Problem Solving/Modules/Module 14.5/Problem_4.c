// RETURN TYPE + PARAMETER //

#include<stdio.h>

char small_to_capital(char ch){
    char c = ch-32;
    return c;
}

int main()
{
    char ch;
    scanf("%c", &ch);

    char chh = small_to_capital(ch);
    printf("%c\n", chh); 

    /// printf("%c\n",small_to_capital(ch));
    
    return 0;
}

/// ----------------------------------------------------------------- ///

// RETURN TYPE + NO PARAMETER //
/*
#include<stdio.h>

char small_to_capital(){
    char ch;
    scanf("%c", &ch);

    char c = ch-32;
    return c;
}

int main()
{

    char chh = small_to_capital();
    printf("%c\n", chh); 

    /// printf("%c\n",small_to_capital(ch));
    
    return 0;
}
*/

/// --------------------------------------------------------------- ///

// NO RETURN TYPE + PARAMETER /// 
/*
#include<stdio.h>

void small_to_capital(char ch){

    char c = ch-32;
    printf("%c\n", c);

    /// printf("%c\n",ch-32);
}

int main()
{
    char ch;
    scanf("%c", &ch);

    small_to_capital(ch);
    
    return 0;
}
*/

/// ------------------------------------------------------------------- ///

// NO RETURN TYPE + NO PARAMETER ///
/*
#include<stdio.h>

void small_to_capital(void){
    char ch;
    scanf("%c", &ch);

    char c = ch-32;
    printf("%c\n", c);

    //printf("%c\n", ch-32);
}

int main()
{
    small_to_capital();
    
    return 0;
}
*/