/// "STL Link" works like Doubly Linked List ///

#include<bits/stdc++.h>
using namespace std;
int main()
{
/* Initially the size of the list is 0 if we don't give a size to it */

    // list<int> myList;
    // cout << myList.size() << endl;      // 0 //

/* Inserting a value in whole list and printing first element using myList.front() */

    // list<int> myList(10, 5);        // first parameter e size, second parameter e value //
    // cout << myList.front() << endl;     // 5 (Mainly shob ghor ei 10 ase, ekhane myList.front diye shudhu first value dekha jay) // 

/* Inserting and printing a value in whole list */

    // list<int> myList(10, 5);
    // for(auto it= myList.begin(); it != myList.end(); it++){
    //     cout << *it << " ";         // 5 5 5 5 5 5 5 5 5 5 (List er shob value print korte chaile iterator diye korte hoy, karon list er index thake na) //
    // }

/* Copying one list to another */

    // list<int> tmpList = {1, 2, 3, 4, 5};
    // list<int> myList(tmpList);

    // for(auto it= myList.begin(); it != myList.end(); it++){
    //     cout << *it << " ";         // 1 2 3 4 5 // 
    // }

/* Copying elements from an array to a list */

    // int a[5] = {10, 20, 30, 40, 50};
    // list<int> myList(a, a+5);       // size jodi n hoy tahole "list<int> myList(a, a+n);" diye korte hoy //

    // for(auto it= myList.begin(); it != myList.end(); it++){
    //     cout << *it << " ";         // 10 20 30 40 50 // 
    // }

/* Copying elements from a vector to a list */

    vector<int> v= {100, 200, 300};
    list<int> myList(v.begin(), v.end());       

    // for(auto it= myList.begin(); it != myList.end(); it++){
    //     cout << *it << " ";         // 100 200 300 // 
    // }

    for(int val: myList){
        cout << val << " ";     // 100 200 300 //
    }

    return 0;
}