#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 50, 60, 70};

    cout << myList.front() << endl;     // 10 //
    cout << myList.back() << endl;      // 70 //

    cout << *next(myList.begin(), 3) << endl;   // 40 //
    
    return 0;
}