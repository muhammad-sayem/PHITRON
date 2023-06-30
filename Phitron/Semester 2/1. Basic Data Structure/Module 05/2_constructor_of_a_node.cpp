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
    Node a(10);         // 'a' node er value 10 but next = NULL //
    Node b(20);         // 'b' node er value 20 but next = NULL //

    a.next = &b;        // jehetu 'a' er sathe 'b' er link korte hobe tai 'a' er next NULL ke change kore 'b' group er address rekhe dilam //
    
    cout << a.val << endl;              // 10 //
    cout << b.val << endl;              // 20 //
    cout << a.next->val << endl;        // 20 //


    return 0;
}