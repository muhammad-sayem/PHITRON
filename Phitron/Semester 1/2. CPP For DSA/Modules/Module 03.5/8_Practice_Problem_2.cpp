#include<bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
        int jersey_no;
        char country[100];
};

int main()
{
    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = 7;

    char c[100] = "India";
    strcpy(dhoni->country, c);

    Cricketer *kohli = new Cricketer;
    
    *kohli = *dhoni;            // dhoni er moddhe joto gulo object thakbe tar shob gular value e kohli er moddhe copy hoyr jabe //

    delete dhoni;

    cout << kohli->country << endl;    
    cout << kohli->jersey_no << endl;    

    return 0;
}

// ------------------------------------------------------------------------ //

/*
#include<bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
        int jersey_no;
        char country[100];
};

int main()
{
    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = 7;

    char c[100] = "India";
    strcpy(dhoni->country, c);

    Cricketer *kohli = new Cricketer;
    
    kohli->jersey_no = dhoni->jersey_no;
    strcpy(kohli->country, dhoni->country);

    delete dhoni;

    cout << kohli->country << endl;    
    cout << kohli->jersey_no << endl;

    // cout << dhoni->country << endl;    
    // cout << dhoni->jersey_no << endl;    

    return 0;
}
*/