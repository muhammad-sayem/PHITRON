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
    int i, j;

    for(i=0; i<3; i++){
        getline(cin,a[i].name);
        cin >> a[i].roll;
        cin >> a[i].marks;
        cin.ignore();           /// Loop chaliye input neyar somoy 2nd jon er name neyar age marks input neya hoy, jeta integer. Ejonno cin.ignore(); use kora hoise ///
    }

    for(i=0; i<2 /*(n-1)*/; i++){       // sort er jonno prothom loop (n-1) porjonto chalate hoy, ekhane jehetu 3 ase fixed value tai manually 2 porjonto deya hoise //
        for(j=i+1; j<3; j++){
            if(a[i].marks > a[j].marks){        // Shudhu marks e na, onno je kono kisu diye e sort kora jabe //
                swap(a[i], a[j]);
            }
        }
    }

    for(i=0; i<3; i++){       
        cout << "Name: " << a[i].name << endl;
        cout << "Roll: " << a[i].roll << endl;
        cout << "Marks: " << a[i].marks << endl << endl;
    }
 
    return 0;
}