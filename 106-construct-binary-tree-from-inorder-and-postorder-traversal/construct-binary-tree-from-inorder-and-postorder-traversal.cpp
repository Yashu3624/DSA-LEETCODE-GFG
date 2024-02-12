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
    
    TreeNode* build(vector<int>& inorder, int instart, int inend, vector<int>& postorder, int postart, int poend, map<int, int>& mp) {
        
        if (instart > inend || postart > poend) 
            return nullptr;
        
        TreeNode* root = new TreeNode(postorder[poend]);
        int inroot = mp[postorder[poend]];
        
        
        int numsleft = inroot - instart;
        
      
        root->left = build(inorder, instart, inroot - 1, postorder, postart, postart + numsleft - 1, mp);
        root->right = build(inorder, inroot + 1, inend, postorder, postart + numsleft, poend - 1, mp);
        
        return root;
    }
    
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    
        if (inorder.size() != postorder.size()) 
            return nullptr;
        
        
        map<int,int> mp; 
        for (int i = 0 ; i < inorder.size(); i++){
            mp[inorder[i]] = i;
        }
        
      
        return build(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1, mp);
    }
};