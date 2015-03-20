/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int getDepth(TreeNode *root){
        if(root == NULL) return 0;
        else{
            int l = getDepth(root->left);
            int r = getDepth(root->right);
            return max(l, r) + 1;
        }
    }
    bool isBalanced(TreeNode *root) {
        if(root == NULL) return true;
        int diff = getDepth(root->left) - getDepth(root->right);
        if(diff > 1 || diff < -1){
            return false;
        }
        if(!isBalanced(root->left) || !isBalanced(root->right))
            return false;
        return true;
    }
};