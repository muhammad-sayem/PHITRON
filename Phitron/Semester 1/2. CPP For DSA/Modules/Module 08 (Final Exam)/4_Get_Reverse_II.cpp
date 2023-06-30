#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int cls;
        char sec;
        int id;
};

int main()
{
    int n, i, j; 
    cin >> n;

    Student obj[n];

    for(i=0; i<n; i++){
        cin >> obj[i].name;
        cin >> obj[i].cls;
        cin >> obj[i].sec;
        cin >> obj[i].id;
    }

    i = 0;
    j = n-1;

    while(i<j){
        swap(obj[i].id, obj[j].id);
        i++;
        j--;
    }
    
    for(i=0; i<n; i++){
        cout << obj[i].name << " " << obj[i].cls << " " << obj[i].sec << " " << obj[i].id << endl; 
    }

    return 0;
}