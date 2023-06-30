#include<bits/stdc++.h>
using namespace std;

void print(stringstream& ss){       /// stringstream e & obosshoi dite hoy recieve korar somoy, naile kaj kore na /// 
    
    string word;
    if(ss >> word){

        /// Evabe dile ulta word print hoy ///
        print(ss);
        cout << word << " ";

        /// Evabe dile shoja print hobe ///
        // cout << word << " ";
        // print(ss);
    }
}

int main()
{
    string str;
    getline(cin, str);

    stringstream ss(str);
    print(ss);

    return 0;
}


// Normally word alada alada ber kora //
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);

    stringstream ss(str);
    string word;

    while(ss >> word){
        cout << word << endl;
    }

    
    return 0;
}
*/

// ---------------------------------------------------------------------- //

// Refeerencing //

// Ekhane user defined function er moddhe string pathaile main er string er kono change hoy na. user defined function e string& diye reciece korte hoy //
/*
#include<bits/stdc++.h>
using namespace std;

void print(string& s){
    s = "World";
}

int main()
{
    string s = "Hello";
    print(s);

    cout << s << endl;

    return 0;
}
*/