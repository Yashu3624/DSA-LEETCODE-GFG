/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
void insertInbetweenNode(Node* temp){
    Node* head = temp;
    while(head!=NULL){
    
        Node* copyNode = new Node(head->val);
        copyNode->next = head->next ;
        head->next = copyNode;
        head =head->next->next ;
    }
 /*   while(temp!=NULL) {
     cout<<temp->val;  
     temp = temp->next; 
    }*/

}
void connectRandomNode(Node* head){
    Node* temp = head ; 
    while(temp!=NULL){
        Node* copyNode = temp->next ;
        if(temp->random){
            copyNode->random = temp->random->next ;
        }
        else{
            copyNode->random = NULL ;
        }
        temp = temp->next->next ;
      
    }
}
Node* copyNode(Node* head){
    Node* dummy = new Node(-1);
    Node* res = dummy ;
    Node* temp = head ; 
    while(temp!=NULL){
        res->next = temp->next ; 
        res = res->next ;
        temp->next = temp->next->next ;
        temp = temp->next ;
    }
    return dummy->next ;
}


class Solution {
public:
    Node* copyRandomList(Node* head) {
        insertInbetweenNode(head);
        connectRandomNode(head);
       return  copyNode(head);
    }
};