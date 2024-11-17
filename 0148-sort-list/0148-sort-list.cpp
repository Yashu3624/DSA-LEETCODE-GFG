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
    ListNode* sortList(ListNode* head) {
        vector<int>res ; 
        while(head!=NULL){
            res.push_back(head->val);
            head = head->next;
        }
        sort(res.begin() , res.end());
        if(res.size()==0) return NULL;
        ListNode* root = new ListNode();
        ListNode* curr = root ;
        for(auto val : res){
            curr->next = new ListNode(val);
            curr = curr->next;
        }
        return root->next;
    }
};