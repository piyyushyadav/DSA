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
    vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    

    if(root == NULL){
        return {};
    }
    queue<TreeNode*> qu;
     qu.push(root);
     while(!qu.empty()){
        int n = qu.size();
        vector<int> level;
        TreeNode* node;
        while(n--){
            node = qu.front();
            level.push_back(node->val);
            qu.pop();
            if(node->left != NULL){
                qu.push(node->left);
            }
            if(node->right != NULL){
                qu.push(node->right);
            }

        }
        ans.push_back(level);
     }
     return ans;
    }
};