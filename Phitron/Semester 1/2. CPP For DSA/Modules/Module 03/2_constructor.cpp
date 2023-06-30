#include<bits/stdc++.h>
using namespace std;

class Student                
{
    public:
        char name[100];
        int cls;
        int roll;
        char sec;

        Student(int c, int r, char s, char* n){         /// ekhane "Student" holo constructor ///
            cls = c;
            roll = r;
            sec = s;
            strcpy(name, n);
        }
};

int main()
{
    Student Sayem(10, 56, 'A', "Sayem Hridoy");     /// evabe likhle direct constructor call hoy ar values pass hoye jay /// 
    Student rashed(9, 98, 'E', "rashed Hossain"); 

    cout << Sayem.name << endl;         
    cout << Sayem.cls << endl;         
    cout << Sayem.roll << endl;         
    cout << Sayem.sec << endl << endl;;

    cout << rashed.name << endl;         
    cout << rashed.cls << endl;         
    cout << rashed.roll << endl;         
    cout << rashed.sec << endl;         
            
    return 0;
}

/*
    /// CONSTRUCTOR ///
    
    => Special type er function jar return type thake na
    => class er name ei constructor er name hoy
    => Automatic call hoy 

*/