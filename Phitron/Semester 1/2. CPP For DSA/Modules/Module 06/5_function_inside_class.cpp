#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
        string name;
        int age;
        int mark1;
        int mark2;

        Person(string nm, int a, int m1, int m2){
            name = nm;
            age = a;
            mark1 = m1;
            mark2 = m2;
        }

        void print(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }

        int total_marks(){
            return mark1 + mark2;
        }
};

int main()
{
    Person sayem("Muhammad Sayem", 22, 70, 80);
    
    sayem.print();
    cout << sayem.total_marks() << endl;
    
    return 0;
}