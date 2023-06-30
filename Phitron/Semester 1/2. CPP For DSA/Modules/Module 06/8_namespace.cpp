#include<bits/stdc++.h>
using namespace std;

namespace rakib
{
    int age1 = 24;
    
    void hello1(){
        cout << "Rakib Namespace" << endl;
    }
}

namespace sakib
{
    int age2 = 30;
    
    void hello2(){
        cout << "Sakib Namespace" << endl;
    }
}

using namespace rakib;
using namespace sakib;

int main()
{
    cout << age1 << endl;
    cout << age2 << endl;
    
    hello1();
    hello2();
    
    return 0;
}