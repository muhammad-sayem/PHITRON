#include<bits/stdc++.h>
using namespace std;

class Student               /// "Student" holo user defined data type ///
{
    public:
        char name[100];
        int cls;
        int roll;
        char sec;
};

int main()
{
    Student sayem;          /// Student holo data type ar sayem holo Student type er ekta variable (int a; jevabe declare kore sei rokom e eta) ///
    
    sayem.cls = 10;         /// . use kore value set korte hoy, karon ekhane class holo onek gulo variable er ekta group ///
    sayem.roll = 56;
    sayem.sec = 'A';
    char nm1[100] = "sayem Hridoy";     /// ei string ta banano hoise karon name er moddhe = diye name pathano jay na. Tai arekta string er moddhe nam initialize kore seta copy kore pathate hoy ///
    strcpy(sayem.name, nm1);            /// name copy kore sayem class er nameer moddhe pathano hocche ///

    Student rashed;
    rashed.cls = 8;
    rashed.roll = 34;
    rashed.sec = 'C';
    char nm2[100] = "rashed Hossain";
    strcpy(rashed.name, nm2);

    // Printing //

    cout << "sayem's Information:" << endl; 

    cout << sayem.cls << endl;
    cout << sayem.roll << endl;
    cout << sayem.sec << endl;
    cout << sayem.name << endl << endl;

    cout << "rashed's Information:" << endl;

    cout << rashed.cls << endl;
    cout << rashed.roll << endl;
    cout << rashed.sec << endl;
    cout << rashed.name << endl;

    return 0;
}