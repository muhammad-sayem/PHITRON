#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        char name[100];
        int roll;
        char section;
        int math_marks;
        int cls;

        Student(char* n, int r, char s, int m, int c){
            strcpy(name,n);
            roll = r;
            section = s;
            math_marks = m;
            cls = c;
        }
};

int main()
{
    char nm1[100] = "Muhammad Sayem";
    Student sayem(nm1, 34, 'A', 73, 9);

    char nm2[100] = "Jahid Hridoy";
    Student jahid(nm2, 27, 'D', 87, 10);

    char nm3[100] = "fahim Islam";
    Student fahim(nm3, 67, 'C', 66, 8);

    if(sayem.math_marks > jahid.math_marks && sayem.math_marks > fahim.math_marks) cout << sayem.name << endl;
    else if(jahid.math_marks > fahim.math_marks) cout << jahid.name << endl;
    else cout << fahim.name << endl;
    
    return 0;
}


