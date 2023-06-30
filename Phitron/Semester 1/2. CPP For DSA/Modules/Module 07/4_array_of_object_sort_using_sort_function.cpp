#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        int marks;
};

/// for marks based sorting ///

bool cmp(Student a, Student b){
    if(a.marks < b.marks) return true;      /// sign ultiye dile boro theke choto sort hbe ///
    else return false;
}

/// for roll based sort ///

// bool cmp(Student a, Student b){
//     if(a.roll < b.roll) return true;
//     else return false;
// }

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

    sort(a, a+3, cmp);

    for(i=0; i<3; i++){
        cout << "Nmae:" << a[i].name << endl;
        cout << "Roll:" <<  a[i].roll << endl;
        cout << "Marks:" << a[i].marks << endl;
    }
    return 0;
}