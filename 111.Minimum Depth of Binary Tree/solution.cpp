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
    int minDepth(TreeNode* root) {
      if(root==nullptr)return 0;
      return traverse(root);
    }
    int traverse(TreeNode* root){
      if(!root) return 100000;
      if(!root->left && !root->right) return 1;
      int lh = traverse(root->left);
      int rh = traverse(root->right);
      return 1 + min(lh, rh);
    }
};