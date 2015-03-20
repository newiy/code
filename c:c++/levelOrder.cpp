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
    vector<vector<int> > levelOrder(TreeNode *root) {
        vector<int> v_row;
        vector<vector<int> > v_res;
        queue<TreeNode *> q;
        TreeNode *t = root;
        if(root == NULL) return v_res;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            for(int i = 0; i < size; i++){
                t = q.front();
                q.pop();
                v_row.push_back(t->val);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            v_res.push_back(v_row);
            v_row.clear();
        }
        return v_res;
    }
};