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
    ListNode* findK(ListNode* head , int k){
        k -= 1 ; 
        while(head!=NULL && k>0){
            head = head->next ; 
            k--;
        }
        return head ;
    }
    void reverse(ListNode* head){
        if(head==NULL) return  ;
        ListNode* temp = head ; 
        ListNode* newNode = NULL ; 
        while(temp!=NULL){
            ListNode* next = temp->next ; 
            temp->next = newNode ;
            newNode = temp ;
            temp = next ;
        }
        head=newNode ;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head ;
        ListNode* nextNode = head ;
        ListNode* prevNode = NULL;

        while(temp!=NULL){
            ListNode* kNode = findK(temp,k);
            if(kNode==NULL){
                if(prevNode) prevNode->next = temp;
                break ;
            }
            nextNode = kNode->next ; 
            kNode->next = NULL ;
            reverse(temp);
            if(temp==head) {
                head = kNode ;
            }
            else{
                prevNode->next = kNode ;
            }
            prevNode = temp ;
            temp = nextNode;

        }
        return head ;
        
    }
};