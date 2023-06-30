#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
        string name;
        int age;

        Person(string name, int age){
            this->name = name;              // (*this).name ar this->name ek e kotha //
            this->age = age;                // (*this).age ar this->age ek e kotha //
        }
};

int main()
{
    Person sayem("Muhammad Sayem", 22);

    cout << sayem.name << endl;
    cout << sayem.age << endl;
    
    return 0;
}