// By Using cmp function //

#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        int marks;
};

bool cmp(Student a, Student b){
    if(a.marks > b.marks) true;
    else if(a.marks == b.marks){
        if(a.roll < b.roll) return true;
        else return false;
    }
    else return false;
}

int main()
{
    int n, i, j;
    cin >> n;

    Student a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i].name;
        cin >> a[i].roll;
        cin >> a[i].marks;
    }

    sort(a, a+n, cmp);

    for(i=0; i<n; i++){
        cout << a[i].name << " " << a[i].roll << " " << a[i]. marks << endl;
    }

    return 0;
}

// By not using cmp function //

/*
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
    int n, i, j;
    cin >> n;

    Student a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i].name;
        cin >> a[i].roll;
        cin >> a[i].marks;
    }

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(a[i].marks < a[j].marks){
                swap(a[i], a[j]);
            }
            else if(a[i].marks == a[j].marks){
                if(a[i].roll > a[j].roll){
                    swap(a[i], a[j]);
                }
            }
        }
    }

    for(i=0; i<n; i++){
        cout << a[i].name << " " << a[i].roll << " " << a[i]. marks << endl;
    }

    return 0;
}
*/

// ---------------------------------------------------------------------------- //

/*
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
    int n, i, j;
    cin >> n;

    Student a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i].name;
        cin >> a[i].roll;
        cin >> a[i].marks;
    }

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(a[i].marks < a[j].marks){
                swap(a[i], a[j]);
            }
        }
    }

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(a[i].marks == a[j].marks){
                if(a[i].roll > a[j].roll){
                    swap(a[i], a[j]);
                }
            }
        }
    }

    for(i=0; i<n; i++){
        cout << a[i].name << " " << a[i].roll << " " << a[i]. marks << endl;
    }

    return 0;
}
*/