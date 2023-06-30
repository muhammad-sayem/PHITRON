#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
};

int main()
{

    Node a, b;

    a.val = 10;
    b.val = 20;

    a.next = &b;
    b.next = NULL;

    cout << a.val << endl;              // 10 (Normally a er value print)//
    cout << b.val << endl;              // 20 // (Normally a er value print) //

    cout << a.next->val << endl;        // 20 (Ekhane 'a' node er maddhome 'b' ke access kore print kora hocche derefference kore) //
    cout << (*a.next).val << endl;      // 20 (Uporer line shortcut kora, shei line er mul bekkha, evabe kaj kore) // 

    return 0;
}