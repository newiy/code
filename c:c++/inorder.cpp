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
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> result;
        if(root == NULL) return result;
        stack<TreeNode *> nodeStack;
        TreeNode *node;
        node = root;
        //nodeStack.push(node);
        while(!nodeStack.empty() || node != NULL){
            while(node != NULL){
                nodeStack.push(node);
                node  = node->left;
            }
            node = nodeStack.top();
            nodeStack.pop();
            result.push_back(node->val);
            node = node->right;
        }
    }
};