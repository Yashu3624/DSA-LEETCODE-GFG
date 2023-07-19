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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>res ;
        queue<TreeNode*>q ;
      
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            double sum = 0.0;
            vector<int>ans(size,0);
        for(int i = 0 ; i < size; i++){
            TreeNode* node = q.front();
            sum += node->val;
            q.pop();
            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right);
            ans.push_back(node->val);
        }
        
       
        res.push_back(sum/(double)size);
    }
    return res;
    }
};