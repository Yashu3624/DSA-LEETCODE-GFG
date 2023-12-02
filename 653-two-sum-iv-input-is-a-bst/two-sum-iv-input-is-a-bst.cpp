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
    void traverse(TreeNode* root , vector<int>&res){
        if(root){
            traverse(root->left,res);
            res.push_back(root->val);
            traverse(root->right,res);
        }
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>res ; 
        traverse(root,res);
        sort(res.begin(),res.end());
        int i = 0 ;
        int j = res.size()-1;
        while(i<j){
            if(res[i]+res[j]==k) return true ;
            else if(res[i]+res[j]>k){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};