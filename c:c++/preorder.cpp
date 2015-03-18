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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> result;
        if(root == NULL) return result;
        stack<TreeNode *> nodeStack;
        TreeNode *node;
        node = root;
        nodeStack.push(node);
        while(!nodeStack.empty()){
            node = nodeStack.top();
            result.push_back(node->val);
            nodeStack.pop();
            //right first
            if(node->right) nodeStack.push(node->right);
            if(node->left) nodeStack.push(node->left);
        }
        return result;
    }
};