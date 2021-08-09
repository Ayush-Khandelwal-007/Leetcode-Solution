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
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        } else if (!(isBalanced(root->left) && isBalanced(root->right))) {
            return false;
        }
        return abs(depth(root->right) - depth(root->left)) <= 1;
    }
    
    int depth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        } else {
            return 1 + max(depth(root->right), depth(root->left));
        }
    }
};

////This is same as the previous solution, but it's more concise as we don't always check for depth as we have seprate funtion for depth.