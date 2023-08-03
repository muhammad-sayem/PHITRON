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

void insert_at_tail(ListNode* &newHead, ListNode* &newTail, long long v){  
    ListNode* newNode = new ListNode(v);

    if(newHead == NULL){
        newHead = newNode;
        newTail = newNode;
        return;
    }

    newTail->next = newNode;
    newTail = newNode;
}

    ListNode* mergeNodes(ListNode* head) {

        ListNode* newHead = NULL;
        ListNode* newTail = NULL;

        ListNode* temp = head->next;
        
        long long sum = 0;

        while(temp != NULL){

            if(temp->val != 0){
                sum += temp->val;
            }

            else{
                insert_at_tail(newHead, newTail, sum);
                sum = 0;
            }

            temp = temp->next;
        }

        return newHead; 
    }
};