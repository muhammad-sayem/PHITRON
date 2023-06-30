/*

In C Programming we can pass arguments to parameters in two different ways. 
They are -      
    1) Pass by value
    2) Pass by Reference

1) Pass by Value:
    In this type of passing we pass only the value of arguments to the parameters, 
    not the address. In this type, if we change something in the user defined function
    then there will change nothing to the main function

    Example:

    void increase(int x, int y){
        x++;
        y++;
    }

    int main()
    {
        int x = 10, y = 20;
        printf("Before calling the funtion, x = %d and y = %d\n", x, y);
    
        increase(x, y);
        printf("After calling the funtion, x = %d and y = %d\n", x, y);
    
        return 0;
    }

    Here both output will be: x = 10 and y = 20;
    Because we passed the only value, not address.

2) Pass by Reference:
    In this type of passing we pass the address of arguments to the parameters. 
    In this type, if we change something in the user defined function
    then there will be change to the main function

    Example:

    #include<stdio.h>

    void increase(int *x, int *y){
        *x+=1;
        *y+=1;
    }

    int main()
    {
        int x = 10, y = 20;
        printf("Before calling the funtion\n");
        printf("x = %d and y = %d\n", x, y);
    
        increase(&x, &y);
        printf("After calling the funtion\n");
        printf("x = %d and y = %d\n", x, y);
    
    return 0;
}

    Here output's will be x = 10 and y = 20 for before calling and 
    x = 11 and y = 21 for after caling the function. Hence we are passing the addresses of the arguments,
    So, if we change anything in our user defined function, it will effect to the main addresses values.
    
*/

