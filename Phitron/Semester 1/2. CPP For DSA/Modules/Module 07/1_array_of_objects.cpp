#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        int marks;
};

int main()
{
    Student a[3];
    int i;

    for(i=0; i<3; i++){
        getline(cin,a[i].name);
        cin >> a[i].roll;
        cin >> a[i].marks;
        cin.ignore();           /// Loop chaliye input neyar somoy 2nd jon er name neyar age marks input neya hoy, jeta integer. Ejonno cin.ignore(); use kora hoise ///
    }

    for(i=0; i<3; i++){
        cout << "Nmae:" << a[i].name << endl;
        cout << "Roll:" <<  a[i].roll << endl;
        cout << "Marks:" << a[i].marks << endl;
    }
    
    return 0;
}