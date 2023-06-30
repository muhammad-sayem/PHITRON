#include <bits/stdc++.h>
using namespace std;

class Student           /// Idea from Asif Abdullah //
{
public:
    char name[100];
    int cls;
    int roll;
};

int main()
{
    Student* sayem = new Student;
    char nm[100] = "Muhammad Sayem";
    strcpy(sayem->name,nm);
    sayem->cls = 8;
    sayem->roll = 54;    // (*sayem).roll = 54 //

    cout << sayem->name << endl;
    cout << sayem->cls << endl;
    cout << sayem->roll << endl;

    return 0;
}