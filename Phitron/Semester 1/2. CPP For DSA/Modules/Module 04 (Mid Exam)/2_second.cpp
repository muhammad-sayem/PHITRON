                                /// a ///
// Question: How does class and object work? How to declare an object? //

/*
A class is a user defined data type which contains several types of datas and functions.
It can be said as a set or bunch of various types of variables. 
And it also can be said a blue print or structure of a specific types of things.

An object can be said as a vaiable of a user defined data type (class).
When an object is declared then all the properties inside the class, the object gets all of them.
And then we can initialize them with our needed values.


Declararing Object:
To declare an object, first need to write the name of the class (user defined data type).
And then simply declare the name of the object.

Example:

#include<bits/stdc++.h>
using namespace std;

class Fruit
{
public:
    char name[100];
    int price;
    int weight;
};

int main()
{
    Fruit mango;
    Fruit orange;
    
    return 0;
}
*/

// ------------------------------------------------------------------------- //

                                /// b ///
// Question: What is a constructor and why do we need this? How to create a constructor show with an example // 
/*
Constructor is a special type of function which is called automatically.
This special type of function has no parameter.
And also it's name is exactly same as the name of the class.

We use constructor to make easier our works.

If we make a class and one or more objects of them, and after that we want to
initialize or give values into them then we need to write the name of the object and then
need to use the (.) operator to choose the variable inside the class.
It's need to do individually for each objects which is a very very long and bad process.

To avoid this problem we use constructor. With the help of this we can directly pass values
into the objects. When an object is crated and used '()' after the object name then the constructor is called automatically.
Then we just need to pass values to the constructor. 


Creating a constructor with example:

#include<bits/stdc++.h>
using namespace std;

class Smartphone
{
public:
    char brandName[100];
    int price;

    Smartphone(char* bn, int p){
        strcpy(brandName, bn);
        price = p;
    }
};

int main()
{
    char name1[100] = "Xiaomi";
    Smartphone xiaomi(name1, 20000);
    
    char name2[100] = "Realme";
    Smartphone realme(name2, 15000);

    cout << xiaomi.brandName << endl;
    cout << xiaomi.price << endl;

    cout << realme.brandName << endl;
    cout << realme.price << endl;
    
    return 0;
}
*/

// -------------------------------------------------------------------------- //

                                /// c ///

// Question: Create a class named Person where the class will have properties name(string), height(float) and age(int). Make a constructor and create a dynamic object of that class and finally pass proper values using the constructor. //

/*
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
    char nm[100] = "Muhammad Shahrul Islam Sayem";
    Person *sayem = new Person(nm, 5.6, 22);

    cout << sayem->name << endl;
    cout << sayem->height << endl;
    cout << sayem->age << endl;
    
    return 0;
}
*/