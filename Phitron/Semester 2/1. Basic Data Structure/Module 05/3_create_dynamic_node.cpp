#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;

        Node(int v){
            val = v;
            next = NULL;
        }
};

int main()
{
    Node* head = new Node(10);          // je data type, oi data type er pointer ferot dey. Tai pointer diye recieve korte hoy //
    Node* a = new Node(20);

    head->next = a;        // ekhane '&a' use kora jabe na. karon jehetu dynamically create kora hoise tai 'head' , 'a' egula nijerai pointer. Era object rakhe na, address rakhe. Tai alda vabe '&' sign deyar dorkar nai //

    cout << head->val << endl;          // 10 //
    cout << a->val << endl;             // 20 //
    cout << head->next->val << endl;     // 20 ('head' er next er vitor 'a' er address rakha ase. Derefference kore 'head' er maddhome 'a' er value print kora hocche)//

    return 0;
}