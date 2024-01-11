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
    int diff = 0 ;
public:
    void f(TreeNode* root , int mini , int maxi ){
        if(root==NULL) return ;
     diff = max(diff, max(abs(mini - root->val), abs(maxi - root->val)));
        mini = min(mini,root->val);
        maxi = max(maxi,root->val);
        f(root->left,mini,maxi);
        f(root->right,mini,maxi);

        
    }
    int maxAncestorDiff(TreeNode* root) {
        if(root==NULL) return 0 ;
        int mini = root->val ;
        int maxi = root->val;
        
        f(root,mini,maxi);
        return diff;
        
    }
};