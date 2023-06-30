// Has Return + Parameter //

#include<stdio.h>

int sum_of_one_to_n(int num){
    return num*(num+1)/2;
}

int main()
{
    int n;
    scanf("%d", &n);

    int res = sum_of_one_to_n(n);
    printf("%d\n", res);
    
    return 0;
}



// Has Return + No Parameter //


/*
#include<stdio.h>

int mult(){
    int a, b;
    scanf("%d %d", &a, &b);

    return a*b;
}

int main()
{
    int res = mult();
    printf("%d\n", res);
    
    return 0;
}
*/


// No Return + Parameter //


/*
#include<stdio.h>

void compare(int x, int y){
    if(x>y){
        printf("%d is greater than %d\n", x, y);
    }
    else if(x<y){
        printf("%d is greater than %d\n", y, x);
    }
    else{
        printf("EQUAL\n");
    }

}

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    compare(a, b);    
    
    return 0;
}
*/

// No return + No Parameter //

/*
#include<stdio.h>

void basic_calculator(){
    int a, b;
    scanf("%d %d", &a, &b);

    printf("Addition: %d\n", a+b);
    printf("Subtraction: %d\n", a-b);
    printf("Multiplication: %d\n", a*b);
    printf("Division: %.2f\n", (float)a/b);
}

int main()
{
    basic_calculator();
    
    return 0;
}
*/