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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        vector<int>ans ; 
        map<int,int>mp ; 
        while(head!=NULL){
            mp[head->val]++;
            head = head->next ; 
        }
        
     
  
        for(auto &it: mp){
            if(it.second==1){
                ans.push_back(it.first);
            }
        }
        if(ans.size()==0) return NULL;
        ListNode* temp = new ListNode(ans[0]);
        ListNode* newNode = temp;
        for(int i = 1 ; i < ans.size() ;i++){
            newNode->next = new ListNode(ans[i]);
            newNode = newNode->next ;
        }
        return temp;
    }
};