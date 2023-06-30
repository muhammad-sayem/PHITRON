#include<bits/stdc++.h>
using namespace std;

class Student                
{
    public:
        char name[100];
        int cls;
        int roll;
        char sec;

        Student(int c, int r, char s, char* n){
            cls = c; 
            roll = r;
            sec = s;
            strcpy(name, n);
        }
};

Student fun(){
    char nm[100] = "sayem Hridoy";      // name directly pathano good practice na, tai arekta string er moddhe age name set kore pore sheta pathano hocche ///   
    Student sayem(7, 56, 'B', nm);
    //Student sayem(7, 56, 'B', "sayem Hridoy");        // evabe ek line eo kora jay, kintu eta good practice na //
    return sayem;                       // ei function return kora hoye gele muche jay, kintu tar aage 'sayem' er shob kichu return kore dey. Jeta Student j diye recieve kora hoise. Ekhon 'j' er moddhe sayem er shob properties ase ///
}

int main()
{
    Student s = fun();          // sayem ja ja return korse shob 'j' recieve korse.......'sayem' (mane same name) dileo kaj korto ---> Normal function er motoi kaj kore eta //s
    cout << s.name << endl;
    cout << s.cls << endl;
    cout << s.roll << endl;
    cout << s.sec << endl;
            
    return 0;
}

