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
    map<int,int>mp;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    
        for(int i = 0 ; i < inorder.size() ; i++){
            mp[inorder[i]] = i ;
        }
        TreeNode* root = build(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
        return root ; 
    }
    TreeNode* build(vector<int>&preorder,int preStart , int preEnd,vector<int>&inorder,int inStart , int inEnd){
        if(preStart>preEnd || inStart >inEnd) return NULL ; 
        TreeNode*root = new TreeNode(preorder[preStart]);
        int index = mp[preorder[preStart]];
        int len = index-inStart ;
        root->left = build(preorder,preStart+1,preStart+len , inorder,inStart , index-1);
        root->right = build(preorder,preStart+len+1,preEnd,inorder,index+1,inEnd);
        return root; 
    }
 

    
};