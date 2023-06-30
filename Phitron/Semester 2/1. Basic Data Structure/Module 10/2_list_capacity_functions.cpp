#include<bits/stdc++.h>
using namespace std;
int main()
{
/* Max Size*/

    // list<int> myList;
    // cout << myList.max_size() << endl;      // 357913941 //

/* clear Function */

    // list<int> myList = {1, 2, 3};

    // myList.clear();
    // cout << myList.size() << endl;      // 0 (myList.clear() use korar karone pura list khali hoye gese, tai size 0 print korse ar niche loop e ksiu print hoy nai) // 

    // for(int val: myList){
    //     cout << val << " ";
    // }

/* resize Function */
    
    // list<int> myList = {1, 2, 3};

    // myList.resize(2);       // 1 2 (karon joto value deya hobe, list er porjonto print korbe) //
    // myList.resize(5, 10);       // 1 2 10 10 10 (age resize kore 2 kore deya hosie tai first 2 ta chilo, pore abar size bariye deyar karone baki 3 ta list e 10 add hoise karon second parameter e 10 diye disi, oikhane ja dibo new jayga gulay tai e dhukbe. kisu na dile 0 thake) // 


    // for(int val: myList){
    //     cout << val << " ";
    // }

/* empty function */

    list<int> myList = {1, 2};

    if(myList.empty() == true) cout << "EMPTY" << endl;
    else cout << "NOT EMPTY" << endl;
   
    return 0;
}