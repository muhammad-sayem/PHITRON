/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode* deleteNode = node->next;
        node->next = node->next->next;
        delete deleteNode;
    }
};

/*
    Ekhane main logic ta holo je node ta dibe tar porer node er value ta current (Given) node e rekhe dite hobe.
    Erpore current (Given) node er sathe porer tar porer ta connect kore, current er porer ta delete kore dite hobe
    Jehetu shudhu node dise, head / position kisui dey nai tai ei logic use korte hoise
*/