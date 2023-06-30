#include<stdio.h>
int main()
{
    int x = 10;
    printf("%p\n", &x);     /// x er address print (ekhane: 0061FF18) ///
    
    int *p = &x;            /// *p hocche x er pointer (ekhane: 0061FF18)///
    printf("%p\n", p);     /// *p pointer er value print (*p pointer er moddhe ashole x er address e ache) ///

    /// derefference ///

    printf("%d\n", *p);    /// *p pointer er maddhome x er value print kora (ekhane: 10) /// 
    
    *p = 500;
    printf("%d\n", x);    /// 500 print hobe....karon *p == x. tai * er moddhe ja ja change kora hobe x er moddheo tai tai change hobe ///

    return 0;
}

/*
    *p == x
    *p te kichu change korle sheta x eo change hobe and vice versa //
*/