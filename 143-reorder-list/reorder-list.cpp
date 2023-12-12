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
    ListNode* findMid(ListNode* head){
        ListNode* slow = head ; 
        ListNode* fast = head ; 
        while(fast != NULL && fast->next!=NULL){
            slow = slow->next ; 
            fast = fast->next->next ; 
        }
        return slow ;
    }
    ListNode* reverse(ListNode* head){
        ListNode* newNode = NULL ; 
        while(head!=NULL){
            ListNode* n = head->next ; 
            head->next = newNode ; 
            newNode = head ; 
            head = n ;
        }
        return newNode;
    }
    ListNode* combine(ListNode* h1 , ListNode* h2 ){
        while(h2!=NULL){
         ListNode* temp1 = h1->next ; 
         h1->next = h2 ; 
         h2 = h2->next ; 
         h1->next->next = temp1 ; 
          h1 = temp1;
        }
        return h1;
    }
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL) return  ; 
        ListNode* mid = findMid(head);
        ListNode* nxt = reverse(mid->next);
        mid->next = NULL ;
        combine(head , nxt);
    }
};