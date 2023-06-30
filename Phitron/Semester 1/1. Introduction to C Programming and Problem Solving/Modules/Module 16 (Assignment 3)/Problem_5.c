/* Write a function named is_palindrome() which will receive a string as parameter from the main function 
and this function will return 1 if the string is palindrome, otherwise it will return 0. 
And with the help of this 1 or 0 print “Palindrome” or “Not Palindrome” in the main function.  
*/

#include<stdio.h>
#include<string.h>

int is_palindrome(char s[]){
    int i, j, flag = 0;
    int len = strlen(s);
    for(i=0, j=len-1; i<(len/2), j>=(len/2); i++, j--){
        if(s[i] != s[j]){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    char str[1000];
    scanf("%s", str);

    int res = is_palindrome(str);

    if(res == 0){
        printf("Not Palindrome\n");
    }
    else{
        printf("Palindrome\n");
    }
    
    return 0;
}



