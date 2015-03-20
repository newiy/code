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
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        vector<int> v_row;
        vector<vector<int> > v_res;
        queue<TreeNode *> q;
        TreeNode *node = root;
        if(root == NULL) return v_res;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            for(int i = 0; i < size; i++){
                node = q.front();
                v_row.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            v_res.push_back(v_row);
            v_row.clear();
        }
        reverse(v_res.begin(), v_res.end());
        return v_res;
    }
};