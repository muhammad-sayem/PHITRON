                                    /// a ///
// Question: What is the size that an object allocates to the memory? //

/*
In an object there could be one or more variables of several types in it.
An object allocates all its variables size's summation.

For example:
If an object has two integer variables, one string size 50 (ex: char name[50]) and one double variable,
then the object will allocate 66 bytes.

int = 8 bytes (4*2)         [1 int type variable takes 4 bytes]
char = 50 bytes             [1 char type variable takes 1 byte]
double = 8 bytes            [1 double type variable takes 8 bytes]

8+50+8 = 66 bytes
*/

// ----------------------------------------------------------------------- //

                                /// b ///
// Question: Can you return a static object from a function? If yes, show with an example. //

/*

Yes, we can return a static object from a function. 

The example is given below:

#include<bits/stdc++.h>
using namespace std;

class Employee
{
public:
    char name[50];
    int age;
    int salary;

    Employee(char* n, int a, int s){
        strcpy(name, n);
        age = a;
        salary = s;
    }
};

Employee emp(){
    char nm[50] = "Jahid Hridoy";
    Employee person1(nm, 29, 10000);
    return person1;
}

int main()
{
    Employee jahid = emp();
    
    cout << jahid.name << endl;
    cout << jahid.age << endl;
    cout << jahid.salary << endl;

    return 0;
}
*/

// ------------------------------------------------------------------------ //

                                /// c ///

// Question: Why do we need -> (arrow sign)? //

/*
We need '->' sign to access the dynamic objects by dereferencing.

When we create a dynamic object, it creates in the heap memory. And it gives an address.
For that reason we can't access it with (.) operator.
Hence it gives an address, so we need a pointer to recieve it.
And we can access it by dereferring.

Example:

cout << (*sayem).age << endl;    [Assume 'sayem' as an dynamic object and age is a property inside it]

We can write this line also like this:

cout << sayem->age << endl;

Both carries same meaning.
*/

// ---------------------------------------------------------------------- //

                                    /// d ///
// Question: Create two objects of the Person class from question 2-c and initialize them with proper value. Now compare whose age is greater, and print his/her name. //

#include<bits/stdc++.h>
using namespace std;

class Person
{
public:
    char name[100];
    float height;
    int age;

    Person(char* n, float h, int a){
        strcpy(name, n);
        height = h;
        age = a;
    }

};

int main()
{
    char nm1[100] = "Muhammad Shahrul Islam Sayem";
    Person sayem(nm1, 5.6, 22);

    char nm2[100] = "Jahid Hridoy";
    Person jahid(nm2, 5.9, 24);

    if(jahid.height > sayem.height) cout << jahid.name << endl;
    else cout << sayem.name << endl;

    return 0;
}

/* 
Output:
Jahid Hridoy
*/ 


