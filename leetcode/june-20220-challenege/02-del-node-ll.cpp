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
        ListNode* p=node;
        ListNode* q=node->next;
        while(q->next != NULL){
            int temp=p->val;
            p->val=q->val;
            q->val=temp;
            p=p->next;
            q=q->next;
        }
        p->val=q->val;
        p->next=NULL;
        //free(q);
    }
};