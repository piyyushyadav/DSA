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
public:vector<vector<int>> ans;

    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL){
            return ans;
        }
        queue<TreeNode*> qt;


        qt.push(root);

        while(!qt.empty()){

            int n = qt.size();

            vector<int> temp (n);


            for(int  i =0;i<n;i++){
                TreeNode* a = qt.front();
                qt.pop();


                temp[i] = a->val;

                if(a->left){
                    qt.push(a->left);

                }
                if(a->right){
                    qt.push(a->right);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};