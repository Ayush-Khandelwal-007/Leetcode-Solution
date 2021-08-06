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

void traverse(TreeNode* node,vector<int>& ans){
  if(node->left){
    traverse(node->left,ans);
  }
  ans.push_back(node->val);
  if(node->right){
    traverse(node->right,ans);
  }
}

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root){
          traverse(root,ans);
        }
      return ans;
    }
};