/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    void insert_at_tail(ListNode* &head, ListNode* &tail, int v){
        ListNode* newNode = new ListNode(v);

        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next =newNode;
        tail = tail->next;
        // tail = newNode;      /// Eta teo kaj kore ///
    }

    void reverse_singly_linked_list(ListNode* &head, ListNode* curr){
        if(curr->next == NULL){
            head = curr;
            return;
        }

        reverse_singly_linked_list(head, curr->next);

        curr->next->next = curr;
        curr->next = NULL;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;

        ListNode* temp = head;

        while(temp != NULL){
            insert_at_tail(newHead, newTail, temp->val);
            temp = temp->next;
        }

        reverse_singly_linked_list(newHead, newHead);

        ListNode* temp1 = head;
        ListNode* temp2 = newHead;

        while(temp1 != NULL){
            if(temp1->val != temp2->val){
                return false;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return true;
    }
};