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
    TreeNode* trimBST(TreeNode* root, int a, int b) {
     if(root==NULL) return NULL ; 
     if(root->val<a) return trimBST(root->right ,a , b );
     if(root->val>b) return trimBST(root->left,a,b);
     root->left = trimBST(root->left,a,b);
     root->right = trimBST(root->right,a,b);
     return root ;   
    }
};