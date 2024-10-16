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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
        if(head==NULL || head->next==NULL) return head;
        int cnt = 0 ;
        while(temp){
            temp = temp->next ;
            cnt++;
        }
        k = k%cnt;
        for(int i = 0 ; i < k ; i++){
            temp = head ; 
        while(temp->next->next)
            temp = temp->next ;
        ListNode* lastNode = temp->next ;
        temp->next = NULL ;
        lastNode->next = head ; 
        head = lastNode ;
        }  
    
    return head ;
}
};