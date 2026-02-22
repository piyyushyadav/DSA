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
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL){
            return {};
        }

        vector<int> ans;

        queue<TreeNode*> qt;
        qt.push(root);
        while(!qt.empty()){
            int n = qt.size();
            TreeNode* node = NULL;

            while(n--){
                node = qt.front();
                qt.pop();

                if(node ->left != NULL){
                    qt.push(node->left);
                }
                if(node -> right != NULL){
                    qt.push(node->right);
                }


            }
            ans.push_back(node->val);
        }
        return ans;
    }
};