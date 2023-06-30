#include<bits/stdc++.h>
using namespace std;

class myClass
{
    public:
        string name;
        int cls;
        char sec;
        int math_marks;
        int english_marks;
};

int main()
{
    int n, i; 
    cin >> n;

    myClass obj[n];

    for(i=0; i<n; i++){
        cin >> obj[i].name;
        cin >> obj[i].cls;
        cin >> obj[i].sec;
        cin >> obj[i].math_marks;
        cin >> obj[i].english_marks;
    }

    for(i=n-1; i>=0; i--){
        cout << obj[i].name << " " << obj[i].cls << " " << obj[i].sec << " " << obj[i].math_marks << " " << obj[i].english_marks << endl; 
    }
    
    return 0;
}