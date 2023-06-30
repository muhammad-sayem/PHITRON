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

void insert_at_tail(ListNode* &newHead, int v){  
    ListNode* newNode = new ListNode(v);

    if(newHead == NULL){
        newHead = newNode;
        return;
    }

    ListNode* temp = newHead;

    while(temp->next != NULL){
        temp = temp->next;
    }
    // ei loop shesh hole 'temp' last node e obosthan kore //

    temp->next = newNode;
}


    ListNode* mergeNodes(ListNode* head) {

        ListNode* newHead = NULL;
        ListNode* temp = head;
        
        temp = temp->next;
        int sum = 0;

        while(temp != NULL){
            if(temp->val != 0){
                sum =+ temp->val;
                temp = temp->next;
            }
            else if(temp->val == 0){
                insert_at_tail(newHead, sum);
                sum = 0;
                temp = temp->next;
            }
        }

        return newHead; 
  
    }
};