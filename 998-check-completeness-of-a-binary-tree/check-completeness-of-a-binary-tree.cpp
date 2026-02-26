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
    bool isCompleteTree(TreeNode* root) {

        queue<TreeNode*> qt;

        bool seen = false;

        qt.push(root);

        while(!qt.empty()){

            TreeNode* node = qt.front();
            qt.pop();

            if(node == NULL){
                seen = true;
            }
            else{
                if(seen == true){
                    return false;
                }
            

            qt.push(node->left);
            qt.push(node->right);
            }
        }
        return true;
        
    }
};