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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums,0,nums.size()-1);
    }
    TreeNode* build(vector<int>&nums , int left , int right){
        if(left>right) return NULL ;
        int mid = (left+right)/2 ; 
        TreeNode* newNode = new TreeNode(nums[mid]);
        newNode->left = build(nums,left,mid-1);
        newNode->right = build(nums,mid+1,right);
        return newNode;
    }
};