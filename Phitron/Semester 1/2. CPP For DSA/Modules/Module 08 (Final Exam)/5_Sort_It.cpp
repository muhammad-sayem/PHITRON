#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int cls;
        char sec;
        int id;
        int math_marks;
        int english_marks;
};

bool cmp(Student a, Student b){
    if(a.math_marks+a.english_marks == b.math_marks+b.english_marks){
        if(a.id < b.id) return true;
        else return false; 
    }
    else return a.math_marks+a.english_marks > b.math_marks+b.english_marks;
    
}

int main()
{
    int n, i; 
    cin >> n;

    Student obj[n];

    for(i=0; i<n; i++){
        cin >> obj[i].name;
        cin >> obj[i].cls;
        cin >> obj[i].sec;
        cin >> obj[i].id;
        cin >> obj[i].math_marks;
        cin >> obj[i].english_marks;
    }

    sort(obj, obj+n, cmp);

    for(i=0; i<n; i++){
        cout << obj[i].name << " " << obj[i].cls << " " << obj[i].sec << " " << obj[i].id << " " << obj[i].math_marks << " " << obj[i].english_marks << endl; 
    }

    
    
    return 0;
}