#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
        string name;
        int age;

        Person(string nm, int a){
            name = nm;      
            age = a;                
        }
};

int main()
{
    Person *iftekhar = new Person("Iftekhar Ahmed", 25);
    Person *jahin = new Person("Jahin Hossain", 28);


    *jahin = *iftekhar;             // iftekhar er pura object tule jahin e copy kora hocche //

    // jahin->name = iftekhar->name;
    // jahin->age = iftekhar->age;
    
    delete iftekhar;

    cout << jahin->name << endl;            // dynamic object, tai -> diye access korte hoy //
    cout << jahin->age << endl;
    
    return 0;
}