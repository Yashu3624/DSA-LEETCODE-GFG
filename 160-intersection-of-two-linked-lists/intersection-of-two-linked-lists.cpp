/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 int height(ListNode* head){
     if(head==NULL) return 0 ;
     int l = 0 ;
     while(head!=NULL){
         l++;
         head = head->next ;
     }
     return l ;
 }
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) return NULL ;
        int n = height(headA) ;
        int m = height(headB);
        int diff = abs(n-m);
        if(n>m){
            while(diff--){
                headA = headA->next ;
            }
        }
        if(n<m){
            while(diff--){
                headB = headB->next ;
            }

        }
        while(headA!=NULL){
            if(headA==headB) return headA;
            else{
                headA = headA->next ;
                headB = headB->next ;
            }
        }
        return NULL;
        
    }
};