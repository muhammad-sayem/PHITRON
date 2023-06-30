#include<bits/stdc++.h>
using namespace std;
int main()
{

/* Assign one list to another List */

    // list<int> myList = {10, 20, 30};
    // list<int> newList;

    // newList = myList;
    /// newList.assign(myList.begin(), myList.end()); ///

    // for(int val: newList){
    //     cout << val << " ";     // 10 20 30 //
    // }

/* push_back(), push_front(), pop_back(), pop_front() */

    // list<int> myList = {1, 2, 3};
    // myList.push_back(100);      // 1 2 3 100 (Insert at Tail) //
    // myList.push_front(200);     // 200 1 2 3 100 (Insert at Head) //

    // for(int val: myList){
    //     cout << val << " ";     
    // }

    // list<int> myList = {1, 2, 3, 4, 5};
    // myList.pop_back();          // 1 2 3 4 (Delete fro Tail) //
    // myList.pop_front();         // 2 3 4 (Delete from Head) //
    // myList.pop_front();         // 3 4 (Delete from Head) //
    // myList.pop_back();          // 3 (Delete from Tail) //

    // for(int val: myList){
    //     cout << val << " ";     
    // }

/* insert function */

    // list<int> newList = {55, 66, 77};
    // list<int> myList = {1, 2, 3, 4, 5};

    //myList.insert(next(myList.begin(), 2), 100);        // 1 2 100 3 4 5 (ekhane myList.begin+2 diye kora jay na, pointer diye korte hoy loop chaliye. loop chalanor jonno built in function hishabe "next" use kora hoy)//
    //myList.insert(next(myList.begin(), 2), {100, 200, 300});      // 1 2 100 200 300 3 4 5 (Multiple values insert kora) //
    //myList.insert(next(myList.begin(), 2), newList.begin(), newList.end());  // 1 2 55 66 77 100 200 300 3 4 5 (arekta list vitore insert kora) //    // 1 2 
    
    // for(int val: myList){
    //     cout << val << " ";     
    // }

/* erase function */

    // list<int> myList = {1, 2, 3, 4, 5, 6, 7, 8};

    // myList.erase(next(myList.begin(), 2));        // 1 2 4 5 6 7 8 (ekhane myList.begin+2 diye kora jay na, pointer diye korte hoy loop chaliye. loop chalanor jonno built in function hishabe "next" use kora hoy)//
    // myList.erase(next(myList.begin(), 2));        // 1 2 5 6 7 8 // 
    
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));     // 1 2 6 7 8 (From 3 to 5 deleted) //

    // for(int val: myList){
    //     cout << val << " ";     
    // }

/* replace function */

    // list<int> myList = {10, 20, 30, 40, 30, 30, 50, 30};

    // replace(myList.begin(), myList.end(), 30, 100);     // 10 20 100 40 100 100 50 100 (shob 30 100 diye replace hoye gese)//

    // for(int val: myList){
    //     cout << val << " ";     
    // }

/* find function */

    list<int> myList = {10, 20, 30, 40, 30, 30, 50, 30};

    auto it = find(myList.begin(), myList.end(), 100);      // find function ta pointer ferot dey. jodi khuje na pay tahole list er end() pointer e chole jay // 

    if(it == myList.end()){             
        cout << "Not Found" << endl;
    }
    else{
        cout << "Found" << endl;
    }

    return 0;
}