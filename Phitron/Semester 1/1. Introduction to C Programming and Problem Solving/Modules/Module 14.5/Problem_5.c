// RETURN TYPE + PARAMETER //

#include<stdio.h>

char capital_to_small(char chh){
    char c = chh+32;
    return c;
}

int main()
{
    char ch;
    scanf("%c", &ch);

    char ans = capital_to_small(ch);
    printf("%c\n", ans); 

    //printf("%c\n",capital_to_small(ch));
    
    return 0;
}

/// ----------------------------------------------------------------- ///

// RETURN TYPE + NO PARAMETER //
/*
#include<stdio.h>

char capital_to_small(){
    char ch;
    scanf("%c", &ch);

    char c = ch+32;
    return c;

    //return ch+32;
}

int main()
{

    char chh = capital_to_small();
    printf("%c\n", chh); 

    // printf("%c\n",capital_to_small());
    
    return 0;
}
*/

/// --------------------------------------------------------------- ///

// NO RETURN TYPE + PARAMETER /// 
/*
#include<stdio.h>

void capital_to_small(char ch){

    char c = ch+32;
    printf("%c\n", c);

    /// printf("%c\n",ch+32);
}

int main()
{
    char ch;
    scanf("%c", &ch);

    capital_to_small(ch);
    
    return 0;
}
*/

/// ------------------------------------------------------------------- ///

// NO RETURN TYPE + NO PARAMETER ///
/*
#include<stdio.h>

void capital_to_small(void){
    char ch;
    scanf("%c", &ch);

    char c = ch+32;
    printf("%c\n", c);

    //printf("%c\n", ch+32);
}

int main()
{
    capital_to_small();
    
    return 0;
}
*/
