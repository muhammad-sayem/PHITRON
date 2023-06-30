#include<bits/stdc++.h>
using namespace std;
int main()
{
/* remove function */

    // list<int> myList = {20, 40, 10, 50, 30, 10, 10};
    // myList.remove(10);      // je value ta delete korte chai sheta joto gula thakbe shob delete hoy jay //

    // for(int val: myList){
    //     cout << val << " ";     // 20 40 50 30 //
    // }

/* sort function */

    // list<int> myList = {20, 40, 10, 50, 30, 10, 10};
    
    // myList.sort();      // 10 10 10 20 30 40 50 (Ascending sort) //
    
    // myList.sort(greater<int>());      // 50 40 30 20 10 10 10  (Descending sort) //

    // for(int val: myList){
    //     cout << val << " ";     
    // }

/* unique function (Jodi kono value ek er beshi bar thake tahole ekta rekhe baki gula delete kore dey. tobe unique function use korte hole age sort kore nite hobe must) */

    // list<int> myList = {20, 40, 10, 50, 30, 10, 10};
    
    // /myList.sort();      // 10 20 30 40 50 (Ascending sort) //

    // myList.unique();

    // for(int val: myList){
    //     cout << val << " ";     // 10 20 30 40 50 (Ascending sort) //
    // }

/* reverse function */

    list<int> myList = {20, 40, 10, 50, 30, 10, 10};
    
    myList.reverse();      

    for(int val: myList){
        cout << val << " ";     //  10 10 30 50 10 40 20 (printed Reversely) //
    }

    return 0;
}