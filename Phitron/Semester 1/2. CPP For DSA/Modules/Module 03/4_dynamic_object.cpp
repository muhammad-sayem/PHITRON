/// CLEAN CODE WITH EXAMPLE BELOW ///

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

int main()
{
    char nm[100] = "Muhammad Sayem";
    // Student sayem(8, 43, 'D', nm);          // Normal object create kora //         

    /// Dynamic object ///

    //Student* sayem = new Student;       /// Jokhon constructor thakbe na tokhon evabe kore ///
    
    Student* sayem = new Student(8, 43, 'D', nm);     // Jokhon constructor thakbe //
    
       //(*sayem). roll = 65;        /// jodi kono kisu update korte chai taholeo direfference korte hoy (dynamic object er khetre) ///

        // cout << (*sayem).name << endl;    // normal int er khetre jemon pointer ke direfference kore value access korte hoy, oi ek e system eta //
        // cout << (*sayem).cls << endl;    
        // cout << (*sayem).roll << endl;    
        // cout << (*sayem).sec << endl; 

        // SHORTCUT //

        cout << sayem->name << endl;    // (*sayem).name = sayem->name (jodi dynamic object hoy ar pointer thake jake direfference korte hoy emon)// 
        cout << sayem->cls << endl;   
        cout << sayem->roll << endl;   
        cout << sayem->sec << endl;  

        // DELETE AN OBJECT //

        delete sayem;

        cout << sayem->name << endl;    
        cout << sayem->cls << endl;   
        cout << sayem->roll << endl;   
        cout << sayem->sec << endl; 
    
    return 0;
}

// ----------------------------------------------------------------------------- //

// Clean code with example //
/*
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

int main()
{
    char nm[100] = "Muhammad Sayem";
    Student* sayem = new Student(8, 43, 'D', nm);

    //(*sayem). roll = 65;        /// jodi kono kisu update korte chai taholeo direfference korte hoy (dynamic object er khetre) ///

    // cout << (*sayem).name << endl;    // normal int er khetre jemon pointer ke direfference kore value access korte hoy, oi ek e system eta //
    // cout << (*sayem).cls << endl;    
    // cout << (*sayem).roll << endl;    
    // cout << (*sayem).sec << endl; 

    // SHORTCUT //

    cout << sayem->name << endl;    // (*sayem).name = sayem->name (jodi dynamic object hoy ar pointer thake jake direfference korte hoy emon)// 
    cout << sayem->cls << endl;   
    cout << sayem->roll << endl;   
    cout << sayem->sec << endl;  

    // DELETE AN OBJECT //

    delete sayem;

    cout << sayem->name << endl;    
    cout << sayem->cls << endl;   
    cout << sayem->roll << endl;   
    cout << sayem->sec << endl;  
    
    return 0;
}
*/
