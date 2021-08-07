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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root){
          if(root->left==nullptr && root->right==nullptr &&root->val==targetSum)return true;
          bool x= root->left? hasPathSum(root->left,targetSum-(root->val)): false;
          bool y= root->right? hasPathSum(root->right,targetSum-(root->val)): false;
          return x||y;
        }
      else{
        return false;
      }
    }
};