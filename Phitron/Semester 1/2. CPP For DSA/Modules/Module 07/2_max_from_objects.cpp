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
        cin.ignore();          
    }

    Student mx;
    mx.marks = INT_MIN;

    for(i=0; i<3; i++){
       if(a[i].marks > mx.marks){
        mx = a[i];                  /// Jehetu 2 tai static object, tai ei normal vabei copy kora jay ///
       }
    }

    cout << "Max Info:\n" << "Name: "  << mx.name << endl << "Roll: " << mx.roll << endl << "Marks: " << mx.marks << endl << endl;
    
    Student mn;
    mn.marks = INT_MAX;

    for(i=0; i<3; i++){
       if(a[i].marks < mn.marks){
        mn = a[i];                  
       }
    }

    cout << "Min Info:\n" << "Name: "  << mn.name << endl << "Roll: " << mn.roll << endl << "Marks: " << mn.marks << endl;

    return 0;
}