// #include<bits/stdc++.h>
// using namespace std;

// void fun(int* p){
//     *p = 20;
// } 

// int main()
// {
//     int val = 10;

//     int* ptr = &val;

//     fun(&val);      // fun(ptr) likhleo kaj korbe. karon int* ptr er moddhe val er address mane '&val' e ase //
    
//     cout << val << endl;        // 20. karon fun function er moddhe val er address pass kora hoise ar fun function er moddhe *p er maddhome sheta recieve kore derefference kore value change kora hoise. Tai main function er moddheo val er value change hoye gese //

//     return 0;
// }

// ---------------------------------------------------------------------- //

// #include<bits/stdc++.h>
// using namespace std;

// void fun(int* p){
//     p = NULL;               // Derefference na kore shudhu Null kore deya hoise. Tai main function e val er value change hobe na //
// } 

// int main()
// {
//     int val = 10;

//     int* ptr = &val;

//     fun(ptr);      // fun(&val) likhleo kaj korbe. karon int* ptr er moddhe val er address mane '&val' e ase //
    
//     cout << val << endl;        // 10 //

//     return 0;
// }


// ----------------------------------------------------------------------- //

#include<bits/stdc++.h>
using namespace std;

void fun(int* &p){
    cout << &p << endl;     // 0x61ff08 //
} 

int main()
{
    int val = 10;

    int* ptr = &val;

    fun(ptr);      // fun(&val) likhleo kaj korbe. karon int* ptr er moddhe val er address mane '&val' e ase //
    
    cout << &ptr << endl;        // 0x61ff08 //

    return 0;
}

/*
    Ekhane duitar address same hoise karon fun(int* &p) diye recieve korar karone oita ar alada kono pointer create kore na. 
    *p ar *ptr ek e hoye jay 
    
*/