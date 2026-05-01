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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     vector<vector<int>> result;
     if(root == NULL){
        return result;
     }
     queue<TreeNode*> qt;
     bool left = true;


     qt.push(root);

     while(!qt.empty()){
        int n = qt.size();
        vector<int> ans(n);

        for(int i =0;i<n;i++){
            TreeNode* node  = qt.front();
            qt.pop();


            int index = (left) ? i : (n-1-i);

            ans[index] = node->val;

            if(node->left){
                qt.push(node->left);
            }
            if(node->right){
                qt.push(node->right);
            }
        }

            left = !left;

            result.push_back(ans);
                    

     }

     return result;
    }
};