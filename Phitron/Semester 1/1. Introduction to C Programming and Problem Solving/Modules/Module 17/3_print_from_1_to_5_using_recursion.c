#include<stdio.h>

void fun(int i){
    if(i == 6) return;            /// Loop thamate jemon break use kora hoy, recursion thamate return use kora hoy ///
    printf("%d\n", i);
    fun(i+1);
}

int main()
{
    fun(1);
    
    return 0;
}

/*
    => Ekhane fun ke call kore 1 pathano hocche, jeta i variable recieve korche
    => Recieve korar pore print kortese ebong abar nijeke nije call dicche jekhane i+1 pathano hocche
    => if (i == 6) return deyar karon holo ami 5 porjonto print korte chai
    => Je condition diya recursion thamano hoy taake Base Case bole 
*/


// Using another base case // 
/*
#include<stdio.h>

void fun(int i){      

    printf("%d\n", i);
    if(i==5) return;
    fun(i+1);
}

int main()
{
    fun(1);
    
    return 0;
}
*/