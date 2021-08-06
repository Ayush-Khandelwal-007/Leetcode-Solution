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
    bool isSameTree(TreeNode* p, TreeNode* q) {
      bool left=true,right=true,ans;
      if(p==nullptr&&q==nullptr)return true;
      if(p!=nullptr&&q==nullptr)return false;
      if(p==nullptr&&q!=nullptr)return false;
      if(p->left){
        if(q->left){
          left=isSameTree(p->left,q->left);
        }
        else{
          left=false;
        }
      }
      else{
        if(q->left){
          left=false;
        }
        else{
          left=true;
        }
      }
      
      ans=(p->val==q->val);
      if(p->right){
        if(q->right){
          right=isSameTree(p->right,q->right);
        }
        else{
          right=false;
        }
      }
       else{
        if(q->right){
          right=false;
        }
        else{
          right=true;
        }
      }
      return left&&ans&&right;
    }
};