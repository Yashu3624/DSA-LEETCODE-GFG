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
    ListNode* partition(ListNode* head, int x) {
        ListNode* great = new ListNode(-1);
        ListNode* small = new ListNode(-1);
        ListNode* g = great ; 
        ListNode* s = small ; 
        ListNode* temp = head  ; 
        while(temp!=NULL){
            if(temp->val<x){
                s->next = temp ;
                s = temp;
            }
            else{
                g->next = temp;
                g = temp;
            }
            temp = temp->next;
        }
        s->next = great->next?great->next:NULL ;
        g->next = NULL ;
        return small->next ;
    }
};