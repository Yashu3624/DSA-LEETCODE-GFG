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
    bool isLeft(TreeNode* node){
        if(node->left==NULL && node->right==NULL) return true ;
        return false ;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL) return 0 ; 
        int sum = 0 ; 
        queue<TreeNode*>q ; 
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i = 0 ; i < n ; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left){
                if(isLeft(node->left)){
                    sum += node->left->val ; 
                }
                q.push(node->left);
                }
                if(node->right) q.push(node->right);
            }
        }
        return sum ;
    }
};