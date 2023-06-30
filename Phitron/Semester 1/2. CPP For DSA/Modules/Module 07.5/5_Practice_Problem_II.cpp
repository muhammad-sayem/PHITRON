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
    int n, i;
    cin >> n;

    Student a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i].name;
        cin >> a[i].roll;
        cin >> a[i].marks;
    }

    for(i=n-1; i>=0; i--){
        cout << a[i].name << " " << a[i].roll << " " << a[i]. marks << endl;
    }


    return 0;
}