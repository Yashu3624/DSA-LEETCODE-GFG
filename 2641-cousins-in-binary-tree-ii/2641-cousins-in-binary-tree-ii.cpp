/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        int level = 0 ; 
        unordered_map<int,int>mp ; 
        queue<TreeNode*>q ;
        q.push(root) ;
        mp[0] = root->val ;
        while(!q.empty()){
            level++ ;
            int n = q.size() ; 
            for(int i = 0 ; i < n ; i++){
                TreeNode* node = q.front() ;
                q.pop() ;
                if(node->left) {
                    q.push(node->left) ;
                    mp[level] += node->left->val ;
                }
                if(node->right){
                    q.push(node->right);
                    mp[level] += node->right->val ;
                }
            }
        }
        q.push(root) ;
        level =0 ; 
        root->val = 0  ;
        while(!q.empty()){
            level++ ; 
            int  n = q.size() ; 
            for(int i = 0 ; i < n ; i++){
                TreeNode* temp = q.front() ;
                q.pop();
                int left  = (temp->left)?temp->left->val:0 ; 
                int right = (temp->right)?temp->right->val:0 ;
                if(temp->left){
                    q.push(temp->left) ; 
                    temp->left->val = mp[level] - left-right ;
                }
                if(temp->right){
                    q.push(temp->right) ;
                    temp->right->val = mp[level] - left - right ;
                }
            }
        }
        return root ;
    }
};