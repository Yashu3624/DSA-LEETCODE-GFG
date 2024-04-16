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
    void solve(TreeNode* root , int val , int depth , int level){
        if(root==NULL) return ;
        if(level<depth-1){
            solve(root->left,val,depth,level+1);
            solve(root->right,val,depth,level+1);
        }
        else{
            TreeNode* node = root->left;
            root->left = new TreeNode(val);
            root->left->left = node ;
            node = root->right ;
            root->right = new TreeNode(val);
            root->right->right = node ;
        }
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* node = new TreeNode(val);
            node->left = root ;
            return node ;
        }
        solve(root,val,depth,1);
        return root ;
    }
};