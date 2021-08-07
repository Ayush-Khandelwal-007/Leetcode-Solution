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
class Solution
{
public:
  int maxDepth(TreeNode *root)
  {
    int ans = 0, depth = 0;
    if (root)
    {
      traverse(root, depth, ans);
    }
    return ans;
  }
  void traverse(TreeNode *node, int d, int &ans)
  {
    d++;
    if (node->right == nullptr && node->left == nullptr)
    {
      ans = max(ans, d);
    }
    else
    {
      if (node->right)
        traverse(node->right, d, ans);
      if (node->left)
        traverse(node->left, d, ans);
    }
  }
};

////////////////////////////////////////////////////////////////////////
// class Solution
// {
// public:
//   int maxDepth(TreeNode *root)
//   {
//     if (root == NULL)
//       return 0;
//     return max(maxDepth(root->right), maxDepth(root->left)) + 1;
//   }
// };