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
        bool isbalanced = true;
        check(root, isbalanced);
        return isbalanced;
    }
    int check(TreeNode* root, bool& flag){
        if(!root) return true;
        int lh = check(root->left, flag);
        int rh = check(root->right, flag);
        if(abs(rh - lh) > 1) {
            flag = false;
        }
        return 1 + max(rh,lh);
    }
};