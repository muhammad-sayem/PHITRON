#include<stdio.h>

void fun(int ar[], int n){          /// *ar evabe dileo hoy  ///
    ar[1] = 888;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    
    fun(a, 5);
    
    for(int i=0; i<5; i++){
        printf("%d ", a[i]);        /// output: 1 888 3 4 5 ///
    }
    
    return 0;
}

// ------------------------------------------------------------ //

/*
#include<stdio.h>

void fun(char s[]){          /// *s evabe dileo hoy  ///
    s[0] = 'F';
}

int main()
{
    char str[20] = "Good";
    fun(str);
    printf("%s\n", str);    /// output: Food ///
    
    return 0;
}
*/