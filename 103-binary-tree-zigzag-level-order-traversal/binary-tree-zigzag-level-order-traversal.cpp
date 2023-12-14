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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res ; 
        if(root==NULL) return res ; 
        queue<TreeNode*>q ; 
        q.push(root);
        int leftRight = true ;
        while(!q.empty()){
            int n = q.size();
            vector<int>temp(n) ; 
            for(int i = 0 ; i < n ; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left!=NULL)  q.push(node->left);
                if(node->right!=NULL)  q.push(node->right);
                int idx = leftRight==true?i:(n-1-i);
                temp[idx] = node->val;
            }
            leftRight = !leftRight;
            res.push_back(temp);

        }
        return res;
    }
};